cmake_minimum_required(VERSION 3.29.6)

project(FloodFill LANGUAGES CXX)

add_library(flood_fill_solution flood_fill.cpp)
target_include_directories(flood_fill_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
