-- Clear existing data
DELETE FROM wormholes;

-- Insert demo wormholes connecting different maps
INSERT INTO wormholes (source_map, target_map, source_x, source_y, target_x, target_y) 
VALUES 
    -- Wormhole connecting map1 to map2
    ('map1', 'map2', 5.0, 3.0, 1.0, 1.0),
    -- Wormhole connecting map2 to map3
    ('map2', 'map3', 8.0, 4.0, 2.0, 2.0),
    -- Return wormholes
    ('map2', 'map1', 1.0, 1.0, 5.0, 3.0),
    ('map3', 'map2', 2.0, 2.0, 8.0, 4.0);
