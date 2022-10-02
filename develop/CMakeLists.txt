cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

# set C++ version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the project name and version
project(SampleSrc CXX)

# compile library file
## status src library
set(STATUS_NAME
    src/Status/status.h
    src/Status/status.cpp
    src/Status/species.h
    src/Status/species.cpp
    src/Status/individual.h
    src/Status/individual.cpp
    src/Status/speciesStatusTable.h
    )
add_library(STATUS STATIC ${STATUS_NAME})

## battle src library
set(BATTLE_NAME
    src/Battle/battle.cpp
    src/Battle/battle.h
    )
add_library(BATTLE STATIC ${BATTLE_NAME})

## stream text src library
set(STREAM_TEXT_NAME
    src/StreamText/streamText.cpp
    src/StreamText/streamText.h
    )
add_library(STREAM_TEXT STATIC ${STREAM_TEXT_NAME})

# execution file
add_executable(main src/main.cpp)

# link to main
target_link_libraries(BATTLE STATUS)
target_link_libraries(STREAM_TEXT STATUS BATTLE)
target_link_libraries(main STATUS BATTLE STREAM_TEXT)

# set include directory
target_include_directories(STATUS INTERFACE ./src/Status)
target_include_directories(BATTLE INTERFACE ./src/Battle)
target_include_directories(STREAM_TEXT INTERFACE ./src/StreamText)
