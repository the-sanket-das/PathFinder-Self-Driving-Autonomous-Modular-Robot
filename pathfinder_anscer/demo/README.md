# Multi-Map Navigation System

## Project Overview
This system enables robots to navigate seamlessly across multiple maps using "wormhole" connections. Key features include:

- Multi-map navigation using wormholes
- Automatic map switching
- SQLite database for wormhole management
- Integration with Nav2 stack
- Action server interface for navigation commands

## Demo Instructions

1. Start the demo:
   ```bash
   ./demo/start_demo.sh
   ```

2. In a new terminal, run the demo sequence:
   ```bash
   ./demo/send_demo_goals.sh
   ```

## How It Works

1. **Wormhole System**
   - Wormholes connect different maps at specific points
   - Each wormhole has source and target coordinates
   - Stored in SQLite database for easy management

2. **Navigation Process**
   - Receives navigation goal with target map and position
   - If target is on different map:
     1. Finds nearest wormhole to target map
     2. Navigates to wormhole entry point
     3. Switches to new map
     4. Navigates to final goal

3. **Key Components**
   - MultiMapNavigator: Main navigation node
   - WormholeManager: Handles wormhole database
   - Action Interface: For sending navigation commands

## Custom Navigation Commands

Send custom navigation goals:
```bash
ros2 action send_goal /multi_map_navigate pathfinder_anscer/action/MultiMapNavigate "{
    target_map: 'map_name',
    goal_pose: {
        header: {
            frame_id: 'map'
        },
        pose: {
            position: {
                x: 0.0,
                y: 0.0,
                z: 0.0
            },
            orientation: {
                w: 1.0
            }
        }
    }
}"
```
