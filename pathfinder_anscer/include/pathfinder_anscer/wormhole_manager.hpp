#ifndef WORMHOLE_MANAGER_HPP_
#define WORMHOLE_MANAGER_HPP_

#include <string>
#include <vector>
#include <memory>
#include <sqlite3.h>
#include <geometry_msgs/msg/pose.hpp>

namespace pathfinder_anscer {

struct Wormhole {
    std::string from_map;
    std::string to_map;
    geometry_msgs::msg::Pose entrance_pose;
    geometry_msgs::msg::Pose exit_pose;
};

class WormholeManager {
public:
    WormholeManager();
    ~WormholeManager();

    bool initializeDatabase(const std::string& db_path);
    bool addWormhole(const Wormhole& wormhole);
    bool getWormhole(const std::string& from_map, const std::string& to_map, Wormhole& wormhole);
    std::vector<Wormhole> getAllWormholes();
    bool deleteWormhole(const std::string& from_map, const std::string& to_map);

private:
    sqlite3* db_;
    bool createTable();
    static int callback(void* data, int argc, char** argv, char** azColName);
};

} // namespace pathfinder_anscer

#endif // WORMHOLE_MANAGER_HPP_
