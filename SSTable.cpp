#include "SSTable.h"
#include <algorithm>
#include <fstream>

SSTable::SSTable(const std::map<std::string, std::string>& memtableData){
    for(const auto& entry : memtableData){
        sortedData.push_back(entry);
    }
}

void SSTable::write_to_disk(const std::string& filename){
    std::ofstream file(filename);
    for (const auto&entry : sortedData){
        file << entry.first << "=" << entry.second << "\n";
    }
    file.close();
}

// Query a key in the SSTable and return its value
std::string SSTable::query(const std::string& key) {
    // Create Iterator and perform binary search to find first position 
    // in sorted range sortedData.begin(), sortedData.end(), our key in sorted data
    // Lambda to compare keys of pair with our key
    auto it = std::lower_bound(sortedData.begin(), sortedData.end(), key,
        [](const std::pair<std::string, std::string>& pair, const std::string& key) {
            return pair.first < key;
        });
    
    if (it != sortedData.end() && it->first == key){
        return it->second;
    }

    return "";
}