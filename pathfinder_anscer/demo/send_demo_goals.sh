#!/bin/bash

# Colors for better readability
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

echo -e "${BLUE}====================================${NC}"
echo -e "${GREEN}Navigation Command Examples${NC}"
echo -e "${BLUE}====================================${NC}"

# Function to send a navigation goal and wait
send_goal() {
    local map=$1
    local x=$2
    local y=$3
    
    echo -e "${YELLOW}Sending navigation goal to:${NC}"
    echo "  Map: $map"
    echo "  Position: ($x, $y)"
    echo
    
    ros2 action send_goal /multi_map_navigate pathfinder_anscer/action/MultiMapNavigate "{
        target_map: '$map',
        goal_pose: {
            header: {
                frame_id: 'map'
            },
            pose: {
                position: {
                    x: $x,
                    y: $y,
                    z: 0.0
                },
                orientation: {
                    w: 1.0
                }
            }
        }
    }"
    
    echo -e "${GREEN}Goal sent! Waiting for navigation...${NC}"
    echo
    sleep 5
}

# Demo sequence
echo -e "${GREEN}Starting navigation sequence...${NC}"
echo

# Navigate through multiple maps
send_goal "map2" 3.0 2.0
send_goal "map3" 5.0 5.0
send_goal "map1" 2.0 2.0
