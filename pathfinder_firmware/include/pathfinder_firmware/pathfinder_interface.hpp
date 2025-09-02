#ifndef pathfinder_INTERFACE_HPP
#define pathfinder_INTERFACE_HPP

#include <rclcpp/rclcpp.hpp>
#include <hardware_interface/system_interface.hpp>
#include <libserial/SerialPort.h>
#include <rclcpp_lifecycle/state.hpp>
#include <rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp>

#include <vector>
#include <string>


namespace pathfinder_firmware
{

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

class pathfinderInterface : public hardware_interface::SystemInterface
{
public:
  pathfinderInterface();
  virtual ~pathfinderInterface();

  // Implementing rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface
  CallbackReturn on_activate(const rclcpp_lifecycle::State &) override;
  CallbackReturn on_deactivate(const rclcpp_lifecycle::State &) override;

  // Implementing hardware_interface::SystemInterface
  CallbackReturn on_init(const hardware_interface::HardwareInfo &hardware_info) override;
  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;
  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;
  hardware_interface::return_type read(const rclcpp::Time &, const rclcpp::Duration &) override;
  hardware_interface::return_type write(const rclcpp::Time &, const rclcpp::Duration &) override;

private:
  LibSerial::SerialPort arduino_;
  std::string port_;
  std::vector<double> velocity_commands_;
  std::vector<double> position_states_;
  std::vector<double> velocity_states_;
  rclcpp::Time last_run_;
};
}  // namespace pathfinder_firmware


#endif  // pathfinder_INTERFACE_HPP