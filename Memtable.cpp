#include"Memtable.h"

void Memtable::insert(const std::string& key, const std::string& value) {
    data[key] = value;
}

// Flush the memtable to disk and return the flushed data
std::map<std::string, std::string> Memtable::flush() {
    std::map<std::string, std::string> flushedData = data;
    data.clear();
    return flushedData;
}