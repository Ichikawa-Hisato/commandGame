cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

# set C++ version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the project name and version
project(SampleSrc CXX)

# compile library file
set(STATUS_NAME src/lib_status/header/status.h src/lib_status/status.cpp)
add_library(STATUS ${STATUS_NAME})

# add include pass
include_directories(${PROJECT_SOURCE_DIR}/src/lib_status/header)

add_executable(main src/main.cpp ${STATUS})
