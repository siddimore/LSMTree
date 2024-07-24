#pragma once
#include "Memtable.h"
#include "SSTable.h"
#include <vector>
#include <memory>

class SSTableManager {
private:
    Memtable memtable; // In-memory table for storing key-value pairs
    std::vector<std::unique_ptr<SSTable>> sstables; // Vector to store SSTables
    size_t memtable_max_size; // Maximum size of the memtable before flushing

    void flush();

public:
    // Constructor to initialize the SSTableManager with a given memtable size
    SSTableManager(size_t max_size);

    // Insert a key-value pair into the SSTableManager
    void insert(const std::string& key, const std::string& value);

    // Query a key in the SSTableManager and return its value
    std::string query(const std::string& key);
};
