#include "SSTableManager.h"

SSTableManager::SSTableManager(size_t max_size) : memtable_max_size (max_size){}

void SSTableManager::insert(const std::string& key, const std::string& value){
    memtable.insert(key, value);
    if (memtable.data.size() >= memtable_max_size){
        flush(); // Flush the memtable if it reaches the maximum size
    }
}

void SSTableManager::flush() {
    auto flushedDatata = memtable.flush();
    auto sstable = std::make_unique<SSTable>(flushedDatata);
    sstable->write_to_disk("sstable_" + std::to_string(sstables.size()) + ".txt");
    sstables.push_back(std::move(sstable));
}

std::string SSTableManager::query(const std::string& key) {
    // Check in Memtable 
    if (memtable.data.find(key) != memtable.data.end()) {
        return memtable.data[key];
    }

    // Check SSTables
    for (auto& sstable : sstables) {
        std::string value = sstable->query(key);
        if (!value.empty()) {
            return value;
        }
    }
    return "";
}