# NaiveSSTable
### Project Overview
The NaiveSSTableProject is a C++17 implementation with SSTable (Sorted String Table) storage for key-value storage and retrieval. The project demonstrates a simple yet effective way to handle large volumes of write operations and maintain efficient read performance.

### Purpose
The purpose of this project is to provide a basic implementation of an SSTable, showcasing the following features:

Efficient Write Operations: Batching writes in memory (Memtable) and periodically flushing to disk (SSTable) to maintain performance.
Efficient Read Operations: Using sorted data structures and binary search for quick lookups.

### Features
Memtable: An in-memory table for storing key-value pairs temporarily before flushing to disk.
SSTable: An immutable, on-disk table that stores sorted key-value pairs for efficient querying.

### Project Structure
NaiveSSTableProject/
├── CMakeLists.txt
├── main.cpp
├── Memtable.h
├── Memtable.cpp
├── SSTable.h
├── SSTable.cpp
├── SSTableManager.h
└── SSTableManager.cpp

### Build and Run instructions
Prerequisites
CMake (version 3.10 or higher)
C++17 compatible compiler (e.g., g++, clang++)

## Steps
1. Clone Repo
git clone https://github.com/your-repo/NaiveSSTableProject.git  
cd NaiveSSTableProject  

2. Generate Build files  
mkdir build  
cd build  
cmake ..  

3. Compile Project
cmake --build .  

4. Run Executable  
./NaiveSSTableProject  

## Reference
Designing Data-Intensive Applications


