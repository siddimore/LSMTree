cmake_minimum_required(VERSION 3.10)
project(LSMTreeProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(LSMTreeProject main.cpp Memtable.cpp SSTable.cpp LSMTree.cpp)

# Include header files
include_directories(${PROJECT_SOURCE_DIR})
