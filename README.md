# LSMTree
### Project Overview
The LSMTreeProject is a C++17 implementation of a Log-Structured Merge (LSM) Tree with SSTable (Sorted String Table) storage for key-value storage and retrieval. The project demonstrates a simple yet effective way to handle large volumes of write operations and maintain efficient read performance by leveraging the LSM Tree data structure.

### Purpose
The purpose of this project is to provide a basic implementation of an LSM Tree, showcasing the following features:

Efficient Write Operations: Batching writes in memory (Memtable) and periodically flushing to disk (SSTable) to maintain performance.
Efficient Read Operations: Using sorted data structures and binary search for quick lookups, complemented by Bloom Filters to reduce unnecessary disk reads.
Concurrency: Ensuring thread-safe operations for concurrent read and write access using mutexes.

### Features
Memtable: An in-memory table for storing key-value pairs temporarily before flushing to disk.
SSTable: An immutable, on-disk table that stores sorted key-value pairs for efficient querying.
Bloom Filter: A probabilistic data structure used to quickly test whether an element is a member of a set, reducing disk accesses.
Concurrency: Thread-safe insertions and queries using std::mutex and std::shared_mutex.

### Project Structure
LSMTreeProject/
├── CMakeLists.txt
├── main.cpp
├── Memtable.h
├── Memtable.cpp
├── SSTable.h
├── SSTable.cpp
├── LSMTree.h
└── LSMTree.cpp

### Build and Run instructions
Prerequisites
CMake (version 3.10 or higher)
C++17 compatible compiler (e.g., g++, clang++)

## Steps
1. Clone Repo
git clone https://github.com/your-repo/LSMTreeProject.git
cd LSMTreeProject

2. Generate Build files
mkdir build
cd build
cmake ..

3. Compile Project
cmake --build .

4. Run Executable
./LSMTreeProject




