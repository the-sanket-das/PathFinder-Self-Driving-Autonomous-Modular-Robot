#!/bin/bash

# Colors for better readability
GREEN='\033[0;32m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

echo -e "${BLUE}========================================${NC}"
echo -e "${GREEN}Multi-Map Navigation System Demonstration${NC}"
echo -e "${BLUE}========================================${NC}"
echo
echo -e "${GREEN}1. Initializing Wormhole Database...${NC}"
sqlite3 config/wormholes.db < config/init_db.sql
sqlite3 config/wormholes.db < config/demo_setup.sql

echo
echo -e "${GREEN}2. Starting Navigation System...${NC}"
echo "Starting ROS 2 multi-map navigator..."
echo "Press Ctrl+C in this terminal when you want to end the demo"
echo
ros2 launch pathfinder_anscer multi_map_nav.launch.py
