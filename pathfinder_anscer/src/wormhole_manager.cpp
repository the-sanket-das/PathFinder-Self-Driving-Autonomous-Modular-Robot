#include "pathfinder_anscer/wormhole_manager.hpp"
#include <sstream>
#include <iostream>

namespace pathfinder_anscer {

WormholeManager::WormholeManager() : db_(nullptr) {}

WormholeManager::~WormholeManager() {
    if (db_) {
        sqlite3_close(db_);
    }
}

bool WormholeManager::initializeDatabase(const std::string& db_path) {
    int rc = sqlite3_open(db_path.c_str(), &db_);
    if (rc) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db_) << std::endl;
        return false;
    }
    return createTable();
}

bool WormholeManager::createTable() {
    const char* sql = 
        "CREATE TABLE IF NOT EXISTS wormholes ("
        "from_map TEXT NOT NULL, "
        "to_map TEXT NOT NULL, "
        "entrance_x REAL NOT NULL, "
        "entrance_y REAL NOT NULL, "
        "entrance_z REAL NOT NULL, "
        "entrance_qx REAL NOT NULL, "
        "entrance_qy REAL NOT NULL, "
        "entrance_qz REAL NOT NULL, "
        "entrance_qw REAL NOT NULL, "
        "exit_x REAL NOT NULL, "
        "exit_y REAL NOT NULL, "
        "exit_z REAL NOT NULL, "
        "exit_qx REAL NOT NULL, "
        "exit_qy REAL NOT NULL, "
        "exit_qz REAL NOT NULL, "
        "exit_qw REAL NOT NULL, "
        "PRIMARY KEY (from_map, to_map))";

    char* errMsg = nullptr;
    int rc = sqlite3_exec(db_, sql, nullptr, nullptr, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        return false;
    }
    return true;
}

bool WormholeManager::addWormhole(const Wormhole& wormhole) {
    const char* sql = "INSERT OR REPLACE INTO wormholes VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db_, sql, -1, &stmt, nullptr);
    if (rc != SQLITE_OK) {
        return false;
    }

    // Bind parameters
    sqlite3_bind_text(stmt, 1, wormhole.from_map.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 2, wormhole.to_map.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_double(stmt, 3, wormhole.entrance_pose.position.x);
    sqlite3_bind_double(stmt, 4, wormhole.entrance_pose.position.y);
    sqlite3_bind_double(stmt, 5, wormhole.entrance_pose.position.z);
    sqlite3_bind_double(stmt, 6, wormhole.entrance_pose.orientation.x);
    sqlite3_bind_double(stmt, 7, wormhole.entrance_pose.orientation.y);
    sqlite3_bind_double(stmt, 8, wormhole.entrance_pose.orientation.z);
    sqlite3_bind_double(stmt, 9, wormhole.entrance_pose.orientation.w);
    sqlite3_bind_double(stmt, 10, wormhole.exit_pose.position.x);
    sqlite3_bind_double(stmt, 11, wormhole.exit_pose.position.y);
    sqlite3_bind_double(stmt, 12, wormhole.exit_pose.position.z);
    sqlite3_bind_double(stmt, 13, wormhole.exit_pose.orientation.x);
    sqlite3_bind_double(stmt, 14, wormhole.exit_pose.orientation.y);
    sqlite3_bind_double(stmt, 15, wormhole.exit_pose.orientation.z);
    sqlite3_bind_double(stmt, 16, wormhole.exit_pose.orientation.w);

    rc = sqlite3_step(stmt);
    sqlite3_finalize(stmt);
    
    return rc == SQLITE_DONE;
}

bool WormholeManager::getWormhole(const std::string& from_map, const std::string& to_map, Wormhole& wormhole) {
    const char* sql = "SELECT * FROM wormholes WHERE from_map = ? AND to_map = ?";

    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db_, sql, -1, &stmt, nullptr);
    if (rc != SQLITE_OK) {
        return false;
    }
    
    rc = sqlite3_bind_text(stmt, 1, from_map.c_str(), -1, SQLITE_STATIC);
    if (rc != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return false;
    }
    
    rc = sqlite3_bind_text(stmt, 2, to_map.c_str(), -1, SQLITE_STATIC);
    if (rc != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return false;
    }

    bool found = false;
    if (sqlite3_step(stmt) == SQLITE_ROW) {
        wormhole.from_map = std::string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0)));
        wormhole.to_map = std::string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)));
        
        wormhole.entrance_pose.position.x = sqlite3_column_double(stmt, 2);
        wormhole.entrance_pose.position.y = sqlite3_column_double(stmt, 3);
        wormhole.entrance_pose.position.z = sqlite3_column_double(stmt, 4);
        wormhole.entrance_pose.orientation.x = sqlite3_column_double(stmt, 5);
        wormhole.entrance_pose.orientation.y = sqlite3_column_double(stmt, 6);
        wormhole.entrance_pose.orientation.z = sqlite3_column_double(stmt, 7);
        wormhole.entrance_pose.orientation.w = sqlite3_column_double(stmt, 8);

        wormhole.exit_pose.position.x = sqlite3_column_double(stmt, 9);
        wormhole.exit_pose.position.y = sqlite3_column_double(stmt, 10);
        wormhole.exit_pose.position.z = sqlite3_column_double(stmt, 11);
        wormhole.exit_pose.orientation.x = sqlite3_column_double(stmt, 12);
        wormhole.exit_pose.orientation.y = sqlite3_column_double(stmt, 13);
        wormhole.exit_pose.orientation.z = sqlite3_column_double(stmt, 14);
        wormhole.exit_pose.orientation.w = sqlite3_column_double(stmt, 15);

        found = true;
    }

    sqlite3_finalize(stmt);
    return found;
}

std::vector<Wormhole> WormholeManager::getAllWormholes() {
    std::vector<Wormhole> wormholes;
    const char* sql = "SELECT * FROM wormholes;";

    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db_, sql, -1, &stmt, nullptr);
    if (rc != SQLITE_OK) {
        return wormholes;
    }

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        Wormhole wormhole;
        wormhole.from_map = std::string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0)));
        wormhole.to_map = std::string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)));
        
        wormhole.entrance_pose.position.x = sqlite3_column_double(stmt, 2);
        wormhole.entrance_pose.position.y = sqlite3_column_double(stmt, 3);
        wormhole.entrance_pose.position.z = sqlite3_column_double(stmt, 4);
        wormhole.entrance_pose.orientation.x = sqlite3_column_double(stmt, 5);
        wormhole.entrance_pose.orientation.y = sqlite3_column_double(stmt, 6);
        wormhole.entrance_pose.orientation.z = sqlite3_column_double(stmt, 7);
        wormhole.entrance_pose.orientation.w = sqlite3_column_double(stmt, 8);

        wormhole.exit_pose.position.x = sqlite3_column_double(stmt, 9);
        wormhole.exit_pose.position.y = sqlite3_column_double(stmt, 10);
        wormhole.exit_pose.position.z = sqlite3_column_double(stmt, 11);
        wormhole.exit_pose.orientation.x = sqlite3_column_double(stmt, 12);
        wormhole.exit_pose.orientation.y = sqlite3_column_double(stmt, 13);
        wormhole.exit_pose.orientation.z = sqlite3_column_double(stmt, 14);
        wormhole.exit_pose.orientation.w = sqlite3_column_double(stmt, 15);

        wormholes.push_back(wormhole);
    }

    sqlite3_finalize(stmt);
    return wormholes;
}

bool WormholeManager::deleteWormhole(const std::string& from_map, const std::string& to_map) {
    const char* sql = "DELETE FROM wormholes WHERE from_map = ? AND to_map = ?";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db_, sql, -1, &stmt, nullptr);
    if (rc != SQLITE_OK) {
        return false;
    }

    // Bind parameters
    sqlite3_bind_text(stmt, 1, from_map.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 2, to_map.c_str(), -1, SQLITE_STATIC);

    rc = sqlite3_step(stmt);
    sqlite3_finalize(stmt);
    
    return rc == SQLITE_DONE;
}

} // namespace pathfinder_anscer
