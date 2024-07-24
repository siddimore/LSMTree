#pragma once
#include <map>
#include <string>

class Memtable {
    public:
    // Map to store the key-value pairs in sorted orde
    std::map<std::string, std::string> data;

    // Insert a key-value pair into the memtable
    void insert(const std::string& key, const std::string& value);

    // Flush Memtable to disk and clear in-memory data
    std::map<std::string, std::string> flush();
};