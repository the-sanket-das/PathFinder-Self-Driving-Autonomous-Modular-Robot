CREATE TABLE IF NOT EXISTS wormholes (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    source_map TEXT NOT NULL,
    target_map TEXT NOT NULL,
    source_x REAL NOT NULL,
    source_y REAL NOT NULL,
    target_x REAL NOT NULL,
    target_y REAL NOT NULL
);
