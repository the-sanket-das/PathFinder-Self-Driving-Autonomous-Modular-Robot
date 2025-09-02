#include "pathfinder_anscer/multi_map_navigator.hpp"
#include <rclcpp/rclcpp.hpp>

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<pathfinder_anscer::MultiMapNavigator>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
