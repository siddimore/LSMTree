#pragma once
#include <vector>
#include <string>
#include <map>

class SSTable {
public:
    // Vector to store the sorted key-value pairs
    std::vector<std::pair<std::string, std::string>> sortedData;

    // Constructor to initialize the SSTable with data from the memtable
    SSTable(const std::map<std::string, std::string>& memtableData);
    
    // Write the sorted key-value pairs to a file on disk
    void write_to_disk(const std::string& filename);
    
    // Query a key in the SSTable and return its value
    std::string query(const std::string& key);
};
