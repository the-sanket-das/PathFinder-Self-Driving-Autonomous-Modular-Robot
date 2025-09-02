#ifndef MULTI_MAP_NAVIGATOR_HPP_
#define MULTI_MAP_NAVIGATOR_HPP_

#include <memory>
#include <string>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <nav2_msgs/action/navigate_to_pose.hpp>
#include "pathfinder_anscer/action/multi_map_navigate.hpp"
#include "pathfinder_anscer/wormhole_manager.hpp"

namespace pathfinder_anscer {

class MultiMapNavigator : public rclcpp::Node {
public:
    using MultiMapNavigate = pathfinder_anscer::action::MultiMapNavigate;
    using GoalHandleMultiMapNavigate = rclcpp_action::ServerGoalHandle<MultiMapNavigate>;
    using NavigateToPose = nav2_msgs::action::NavigateToPose;

    explicit MultiMapNavigator(const rclcpp::NodeOptions& options = rclcpp::NodeOptions());

private:
    // Action server
    rclcpp_action::Server<MultiMapNavigate>::SharedPtr action_server_;
    
    // Action client for Nav2
    rclcpp_action::Client<NavigateToPose>::SharedPtr nav_client_;
    
    // Wormhole manager
    std::shared_ptr<WormholeManager> wormhole_manager_;
    
    // Current map name
    std::string current_map_name_;

    // Action server callbacks
    rclcpp_action::GoalResponse handleGoal(
        const rclcpp_action::GoalUUID& uuid,
        std::shared_ptr<const MultiMapNavigate::Goal> goal);

    rclcpp_action::CancelResponse handleCancel(
        const std::shared_ptr<GoalHandleMultiMapNavigate> goal_handle);

    void handleAccepted(
        const std::shared_ptr<GoalHandleMultiMapNavigate> goal_handle);

    // Navigation methods
    void executeNavigation(
        const std::shared_ptr<GoalHandleMultiMapNavigate> goal_handle);
        
    bool navigateToWormhole(
        const std::string& target_map,
        const std::shared_ptr<GoalHandleMultiMapNavigate> goal_handle);
        
    bool switchMap(
        const std::string& target_map,
        const std::shared_ptr<GoalHandleMultiMapNavigate> goal_handle);
};

} // namespace pathfinder_anscer

#endif // MULTI_MAP_NAVIGATOR_HPP_
