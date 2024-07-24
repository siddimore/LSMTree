#include "LSMTree.h"
#include <iostream>

int main() {
    // Set Memtable Size
    LSMTree lsmTree(3);

    lsmTree.insert("key1", "val1");
    lsmTree.insert("key2", "val2");
    lsmTree.insert("key3", "val3");
    // Trigger Flush
    lsmTree.insert("key4", "val4");

    std::cout << "Query key1: " << lsmTree.query("key1") << std::endl;
    std::cout << "Query key3: " << lsmTree.query("key3") << std::endl;
    std::cout << "Query key4: " << lsmTree.query("key4") << std::endl;
    std::cout << "Query key5: " << lsmTree.query("key5") << std::endl; // Should return empty

    return 0;

}