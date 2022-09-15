cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

# set C++ version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the project name and version
project(SampleSrc CXX)

# compile library file
## status src library
set(STATUS_NAME
    src/libstatus/status.h
    src/libstatus/status.cpp
    src/libstatus/species.h
    src/libstatus/species.cpp
    src/libstatus/individual.h
    src/libstatus/individual.cpp
    src/libstatus/speciesStatusTable.h
    )
add_library(Status STATIC ${STATUS_NAME})

# execution file
add_executable(main src/main.cpp)

# link to main
target_link_libraries(main Status)

# set include directory
target_include_directories(Status INTERFACE ./src/libstatus)
