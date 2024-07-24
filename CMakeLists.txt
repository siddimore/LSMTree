cmake_minimum_required(VERSION 3.10)
project(NaiveSSTableProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(NaiveSSTableProject main.cpp Memtable.cpp SSTable.cpp SSTableManager.cpp)

# Include header files
include_directories(${PROJECT_SOURCE_DIR})
