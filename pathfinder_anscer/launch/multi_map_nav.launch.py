from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Launch arguments
    use_sim_time = LaunchConfiguration('use_sim_time')
    current_map = LaunchConfiguration('current_map')
    db_path = LaunchConfiguration('db_path')

    # Declare launch arguments
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='true',
        description='Use simulation time'
    )

    current_map_arg = DeclareLaunchArgument(
        'current_map',
        default_value='map1',
        description='Current map name'
    )

    db_path_arg = DeclareLaunchArgument(
        'db_path',
        default_value=os.path.join(
            get_package_share_directory('pathfinder_anscer'),
            'wormholes.db'
        ),
        description='Path to wormhole database'
    )

    # Multi-map navigator node
    navigator_node = Node(
        package='pathfinder_anscer',
        executable='multi_map_navigator',
        name='multi_map_navigator',
        output='screen',
        parameters=[{
            'use_sim_time': use_sim_time,
            'current_map': current_map,
            'wormhole_db_path': db_path
        }]
    )

    # Include the robot simulation
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            os.path.join(get_package_share_directory('pathfinder_description'), 'launch', 'gazebo.launch.py')
        ])
    )

    # Include navigation stack
    navigation_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            os.path.join(get_package_share_directory('pathfinder_navigation'), 'launch', 'navigation.launch.py')
        ]),
        launch_arguments={'use_sim_time': use_sim_time}.items()
    )

    # Include global localization
    localization_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            os.path.join(get_package_share_directory('pathfinder_localization'), 'launch', 'global_localization.launch.py')
        ]),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'map_name': current_map
        }.items()
    )

    return LaunchDescription([
        use_sim_time_arg,
        current_map_arg,
        db_path_arg,
        gazebo_launch,
        navigation_launch,
        localization_launch,
        navigator_node
    ])