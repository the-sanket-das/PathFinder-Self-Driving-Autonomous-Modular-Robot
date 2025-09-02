#include "pathfinder_anscer/multi_map_navigator.hpp"
#include <functional>
#include <memory>
#include <thread>

namespace pathfinder_anscer {

MultiMapNavigator::MultiMapNavigator(const rclcpp::NodeOptions& options)
    : Node("multi_map_navigator", options) {
    
    // Initialize parameters
    this->declare_parameter("current_map", "default_map");
    this->declare_parameter("wormhole_db_path", "wormholes.db");
    
    current_map_name_ = this->get_parameter("current_map").as_string();
    std::string db_path = this->get_parameter("wormhole_db_path").as_string();

    // Initialize wormhole manager
    wormhole_manager_ = std::make_shared<WormholeManager>();
    if (!wormhole_manager_->initializeDatabase(db_path)) {
        RCLCPP_ERROR(this->get_logger(), "Failed to initialize wormhole database");
        return;
    }

    // Create the action server
    using namespace std::placeholders;
    this->action_server_ = rclcpp_action::create_server<MultiMapNavigate>(
        this,
        "multi_map_navigate",
        std::bind(&MultiMapNavigator::handleGoal, this, _1, _2),
        std::bind(&MultiMapNavigator::handleCancel, this, _1),
        std::bind(&MultiMapNavigator::handleAccepted, this, _1));

    // Create the navigation client
    nav_client_ = rclcpp_action::create_client<NavigateToPose>(
        this, "navigate_to_pose");

    RCLCPP_INFO(this->get_logger(), "Multi-map navigator initialized");
}

rclcpp_action::GoalResponse MultiMapNavigator::handleGoal(
    const rclcpp_action::GoalUUID& /* uuid */,
    std::shared_ptr<const MultiMapNavigate::Goal> /* goal */) {
    
    RCLCPP_INFO(this->get_logger(), "Received goal request");
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

rclcpp_action::CancelResponse MultiMapNavigator::handleCancel(
    const std::shared_ptr<GoalHandleMultiMapNavigate> /* goal_handle */) {
    
    RCLCPP_INFO(this->get_logger(), "Received cancel request");
    return rclcpp_action::CancelResponse::ACCEPT;
}

void MultiMapNavigator::handleAccepted(
    const std::shared_ptr<GoalHandleMultiMapNavigate> goal_handle) {
    
    std::thread{
        std::bind(&MultiMapNavigator::executeNavigation, this, goal_handle)
    }.detach();
}

void MultiMapNavigator::executeNavigation(
    const std::shared_ptr<GoalHandleMultiMapNavigate> goal_handle) {
    
    const auto goal = goal_handle->get_goal();
    auto feedback = std::make_shared<MultiMapNavigate::Feedback>();
    auto result = std::make_shared<MultiMapNavigate::Result>();

    // Check if we're already in the target map
    if (current_map_name_ == goal->target_map_name) {
        // Direct navigation
        feedback->current_state = "Navigating in current map";
        goal_handle->publish_feedback(feedback);

        auto nav_goal = NavigateToPose::Goal();
        nav_goal.pose = goal->goal_pose;

        auto nav_future = nav_client_->async_send_goal(nav_goal);
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), nav_future) !=
            rclcpp::FutureReturnCode::SUCCESS) {
            result->success = false;
            result->message = "Failed to send navigation goal";
            goal_handle->succeed(result);
            return;
        }

        result->success = true;
        result->message = "Navigation completed successfully";
    } else {
        // Multi-map navigation
        feedback->current_state = "Navigating to wormhole";
        goal_handle->publish_feedback(feedback);

        // Navigate to wormhole
        if (!navigateToWormhole(goal->target_map_name, goal_handle)) {
            result->success = false;
            result->message = "Failed to navigate to wormhole";
            goal_handle->succeed(result);
            return;
        }

        // Switch maps
        feedback->current_state = "Switching maps";
        goal_handle->publish_feedback(feedback);

        if (!switchMap(goal->target_map_name, goal_handle)) {
            result->success = false;
            result->message = "Failed to switch maps";
            goal_handle->succeed(result);
            return;
        }

        // Navigate to final goal
        feedback->current_state = "Navigating to final goal";
        goal_handle->publish_feedback(feedback);

        auto nav_goal = NavigateToPose::Goal();
        nav_goal.pose = goal->goal_pose;

        auto nav_future = nav_client_->async_send_goal(nav_goal);
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), nav_future) !=
            rclcpp::FutureReturnCode::SUCCESS) {
            result->success = false;
            result->message = "Failed to send final navigation goal";
            goal_handle->succeed(result);
            return;
        }

        result->success = true;
        result->message = "Multi-map navigation completed successfully";
    }

    goal_handle->succeed(result);
}

bool MultiMapNavigator::navigateToWormhole(
    const std::string& target_map,
    const std::shared_ptr<GoalHandleMultiMapNavigate> /* goal_handle */) {
    
    Wormhole wormhole;
    if (!wormhole_manager_->getWormhole(current_map_name_, target_map, wormhole)) {
        RCLCPP_ERROR(this->get_logger(), "No wormhole found between maps");
        return false;
    }

    auto nav_goal = NavigateToPose::Goal();
    nav_goal.pose.header.frame_id = "map";
    nav_goal.pose.pose = wormhole.entrance_pose;

    auto nav_future = nav_client_->async_send_goal(nav_goal);
    return rclcpp::spin_until_future_complete(this->get_node_base_interface(), nav_future) ==
           rclcpp::FutureReturnCode::SUCCESS;
}

bool MultiMapNavigator::switchMap(
    const std::string& target_map,
    const std::shared_ptr<GoalHandleMultiMapNavigate> /* goal_handle */) {
    
    // TODO: Implement map switching logic
    // This would involve:
    // 1. Saving the current map
    // 2. Loading the target map
    // 3. Reinitializing localization
    
    current_map_name_ = target_map;
    return true;
}

} // namespace pathfinder_anscer

// No need for component registration since we're using it as a standalone node
