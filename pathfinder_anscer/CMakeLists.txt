cmake_minimum_required(VERSION 3.8)
project(pathfinder_anscer)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(action_msgs REQUIRED)
find_package(SQLite3 REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generate action files
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/MultiMapNavigate.action"
  DEPENDENCIES geometry_msgs action_msgs
  LIBRARY_NAME ${PROJECT_NAME}
)

rosidl_get_typesupport_target(cpp_typesupport_target "${PROJECT_NAME}" "rosidl_typesupport_cpp")

# Add the wormhole manager library
add_library(wormhole_manager SHARED
  src/wormhole_manager.cpp
)
target_include_directories(wormhole_manager PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_cpp>
  $<INSTALL_INTERFACE:include>
)
target_link_libraries(wormhole_manager PUBLIC ${SQLite3_LIBRARIES})
ament_target_dependencies(wormhole_manager PUBLIC
  rclcpp
  geometry_msgs
)

# Make sure the actions are generated before the libraries
add_dependencies(wormhole_manager ${PROJECT_NAME})

# Add the navigation action server library
add_library(multi_map_navigator_lib SHARED
  src/multi_map_navigator.cpp
)
target_include_directories(multi_map_navigator_lib PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_cpp>
  $<INSTALL_INTERFACE:include>
)
target_link_libraries(multi_map_navigator_lib
  PUBLIC
    wormhole_manager
    ${cpp_typesupport_target}
)
ament_target_dependencies(multi_map_navigator_lib PUBLIC
  rclcpp
  rclcpp_action
  geometry_msgs
  nav2_msgs
  tf2 
  tf2_ros
  action_msgs
)
add_dependencies(multi_map_navigator_lib ${PROJECT_NAME})

# Add the navigation action server executable
add_executable(multi_map_navigator 
  src/multi_map_navigator_node.cpp
)
target_link_libraries(multi_map_navigator
  multi_map_navigator_lib
  ${cpp_typesupport_target}
)
target_include_directories(multi_map_navigator PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_cpp>
)
add_dependencies(multi_map_navigator ${PROJECT_NAME})

# Install targets
install(TARGETS
  wormhole_manager
  multi_map_navigator_lib
  multi_map_navigator
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

# Install header files
install(DIRECTORY include/
  DESTINATION include
)

# Install launch files
install(DIRECTORY
  launch
  config
  DESTINATION share/${PROJECT_NAME}
)

# Export dependencies
ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)
ament_export_dependencies(
  rosidl_default_runtime
  rclcpp
  rclcpp_action
  geometry_msgs
  nav2_msgs
  tf2
  tf2_ros
  action_msgs
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
