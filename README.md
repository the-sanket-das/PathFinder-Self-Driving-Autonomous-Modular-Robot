
# PathFinder: Self-Driving Autonomous Modular Robot

This repository contains the codebase for the PathFinder project, a modular self-driving robot platform. The workspace is organized into multiple ROS 2 packages, each responsible for different aspects of robot operation, including navigation, localization, mapping, motion planning, firmware, and more.

## Project Overview
PathFinder is designed to be a flexible and extensible platform for autonomous robotics . The base robot supports interchangeable modules, such as swapping a scissor lift for a cleaning module, to adapt to various
 tasks like robotic arms, conveyors, or cleaning systems.It leverages ROS 2 for modularity and scalability, supporting features such as multi-map navigation, localization, motion planning, and hardware integration.
 
![Robot Demo](Images/single%20plate%20base%20robot.png)

## Workspace Structure
The workspace contains the following main packages:

- `pathfinder_anscer`: Multi-map navigation and related actions.
- `pathfinder_bringup`: Launch and configuration files for bringing up the robot.
- `pathfinder_controller`: Robot control logic and interfaces.
- `pathfinder_description`: URDF, meshes, and visualization assets for the robot.
- `pathfinder_firmware`: Firmware and hardware interface code.
- `pathfinder_localization`: Localization algorithms and configuration.
- `pathfinder_mapping`: Mapping and map management tools.
- `pathfinder_motion`: Motion planning and plugins.
- `pathfinder_msgs`: Custom ROS 2 messages and actions.
- `pathfinder_navigation`: Navigation stack and behavior trees.
- `pathfinder_planning`: Global and local planning algorithms.
- `pathfinder_utils`: Utility functions and shared code.

![Robot Demo](Images/double%20plate%20base%20robot.png)
![Robot Demo](Images/pathfinder%20with%20double%20arm.png)
## Build Instructions
This project is made in ROS 2 Jazzy and Ubuntu 24.04 

## Package Summaries
### pathfinder_anscer
Multi-map navigation logic and custom actions 

### pathfinder_bringup
Launch files and configuration for starting the robot system.

### pathfinder_controller
Robot control algorithms and hardware interfaces.

### pathfinder_description
Robot model (URDF), meshes, and visualization resources for RViz and Gazebo.

### pathfinder_firmware
Firmware code and hardware interface definitions.

### pathfinder_localization
Localization algorithms and configuration files.

### pathfinder_mapping
Mapping tools, map storage, and related utilities.

### pathfinder_motion
Motion planning plugins and algorithms.

### pathfinder_msgs
Custom ROS 2 messages and actions for inter-package communication.

### pathfinder_navigation
Navigation stack, including behavior trees and launch files.

### pathfinder_planning
Global and local planning algorithms and plugins.

### pathfinder_utils
Shared utility functions and helper scripts.

![Robot Demo](Images/pathfinder%20with%20scissor.png)
![Robot Demo](Images/pathfinder%20with%20scissor%20and%20conveyor.png)


## Usage
<<<<<<< HEAD
1. Use launch files in `pathfinder_bringup/launch/` to start the robot system.
=======
1. Use launch files in `pathfinder_bringup/launch/` to start the robot system.
>>>>>>> 51f4a438da858a2b03e3a2ee0e21bbf9f98f0f85
