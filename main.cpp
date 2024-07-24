#include "SSTableManager.h"
#include <iostream>

int main() {
    // Set Memtable Size
    SSTableManager SSTableManager(3);

    SSTableManager.insert("key1", "val1");
    SSTableManager.insert("key2", "val2");
    SSTableManager.insert("key3", "val3");
    // Trigger Flush
    SSTableManager.insert("key4", "val4");

    std::cout << "Query key1: " << SSTableManager.query("key1") << std::endl;
    std::cout << "Query key3: " << SSTableManager.query("key3") << std::endl;
    std::cout << "Query key4: " << SSTableManager.query("key4") << std::endl;
    std::cout << "Query key5: " << SSTableManager.query("key5") << std::endl; // Should return empty

    return 0;

}