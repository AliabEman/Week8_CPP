cmake_minimum_required(VERSION 3.13)  # CMake version check
project(simple_example)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Add executable target with source files listed in SOURCE_FILES variable
#SHARED means make .dll instead of .lib //.dylib
add_library(MyCPPLibrary SHARED /Week8/Lab8.cpp /Week8/JavaTextMenu.h)

target_include_directories(MyCPPLibrary PRIVATE 
	"/Library/Java/JavaVirtualMachines/jdk-17.jdk/Contents/Home/include"
	"/Library/Java/JavaVirtualMachines/jdk-17.jdk/Contents/Home/include/darwin")

addcompilerflag (-fopenmp)


