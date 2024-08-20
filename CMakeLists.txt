cmake_minimum_required(VERSION 3.13)  # CMake version check
project(COMP)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of the project root directory as a source file
set(SOURCE_FILES ./main.cpp comp/J12024.cpp comp/S12024.cpp leetcode/9.cpp leetcode/13.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(run.exe ${SOURCE_FILES})