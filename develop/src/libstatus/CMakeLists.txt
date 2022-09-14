cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

# set C++ version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the project name and version
project(SampleSrc CXX)

# compile library file
## status src library
set(STATUS_NAME status.h status.cpp species.h individual.h)
add_library(Status STATIC ${STATUS_NAME})
