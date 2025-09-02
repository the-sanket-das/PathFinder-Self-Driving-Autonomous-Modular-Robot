import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    use_slam = LaunchConfiguration("use_slam")
    current_map = LaunchConfiguration("current_map")
    db_path = LaunchConfiguration("db_path")

    use_slam_arg = DeclareLaunchArgument(
        "use_slam",
        default_value="false"
    )

    current_map_arg = DeclareLaunchArgument(
        "current_map",
        default_value="map1",
        description="Current map name"
    )

    db_path_arg = DeclareLaunchArgument(
        "db_path",
        default_value=os.path.join(
            get_package_share_directory("pathfinder_anscer"),
            "wormholes.db"
        ),
        description="Path to wormhole database"
    )

    gazebo = IncludeLaunchDescription(
        os.path.join(
            get_package_share_directory("pathfinder_description"),
            "launch",
            "gazebo.launch.py"
        ),
    )
    
    controller = IncludeLaunchDescription(
        os.path.join(
            get_package_share_directory("pathfinder_controller"),
            "launch",
            "controller.launch.py"
        ),
        launch_arguments={
            "use_simple_controller": "False",
            "use_python": "False"
        }.items(),
    )
    
    joystick = IncludeLaunchDescription(
        os.path.join(
            get_package_share_directory("pathfinder_controller"),
            "launch",
            "joystick_teleop.launch.py"
        ),
        launch_arguments={
            "use_sim_time": "True"
        }.items()
    )

    localization = IncludeLaunchDescription(
        os.path.join(
            get_package_share_directory("pathfinder_localization"),
            "launch",
            "global_localization.launch.py"
        ),
        condition=UnlessCondition(use_slam)
    )

    slam = IncludeLaunchDescription(
        os.path.join(
            get_package_share_directory("pathfinder_mapping"),
            "launch",
            "slam.launch.py"
        ),
        condition=IfCondition(use_slam)
    )

    navigation = IncludeLaunchDescription(
        os.path.join(
            get_package_share_directory("pathfinder_navigation"),
            "launch",
            "navigation.launch.py"
        ),
    )

    rviz = Node(
        package="rviz2",
        executable="rviz2",
        arguments=["-d", os.path.join(
                get_package_share_directory("nav2_bringup"),
                "rviz",
                "nav2_default_view.rviz"
            )
        ],
        output="screen",
        parameters=[{"use_sim_time": True}]
    )
    
    # Add multi-map navigator node
    multi_map_navigator = Node(
        package="pathfinder_anscer",
        executable="multi_map_navigator",
        name="multi_map_navigator",
        output="screen",
        parameters=[{
            "use_sim_time": True,
            "current_map": current_map,
            "wormhole_db_path": db_path
        }]
    )

    return LaunchDescription([
        use_slam_arg,
        current_map_arg,
        db_path_arg,
        gazebo,
        controller,
        joystick,
        localization,
        slam,
        navigation,
        rviz,
        multi_map_navigator
    ])