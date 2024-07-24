#include "LSMTree.h"
#include <iostream>

int main() {
    // Set Memtable Size
    SSTableManager  ssm(3);

    ssm.insert("key1", "val1");
    ssm.insert("key2", "val2");
    ssm.insert("key3", "val3");
    // Trigger Flush
    ssm.insert("key4", "val4");

    std::cout << "Query key1: " << ssm.query("key1") << std::endl;
    std::cout << "Query key3: " << ssm.query("key3") << std::endl;
    std::cout << "Query key4: " << ssm.query("key4") << std::endl;
    std::cout << "Query key5: " << ssm.query("key5") << std::endl; // Should return empty

    return 0;

}
