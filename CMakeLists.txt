cmake_minimum_required(VERSION 3.3)
project(fgal)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/hitbox.cpp src/hitbox.h src/inc/types.h)
add_executable(fgal ${SOURCE_FILES})