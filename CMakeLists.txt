cmake_minimum_required(VERSION 3.13)  # CMake version check
project(COMP)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 20)            # Enable c++14 standard

# Add all files
file(GLOB SOURCE_FILES
    "${CMAKE_SOURCE_DIR}/compS/*/*.cpp"
    "${CMAKE_SOURCE_DIR}/compJ/*/*.cpp"
    "${CMAKE_SOURCE_DIR}/leetcode/*.cpp"
    "${CMAKE_SOURCE_DIR}/olyimpiads/*/*.cpp"
    "${CMAKE_SOURCE_DIR}/main.cpp"
    "${CMAKE_SOURCE_DIR}/random/*.cpp"
    "${CMAKE_SOURCE_DIR}/others/*.cpp"
    "${CMAKE_SOURCE_DIR}/usaco/*/*.cpp"
)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(run.exe ${SOURCE_FILES})