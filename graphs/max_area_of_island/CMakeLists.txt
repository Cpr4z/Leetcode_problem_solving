cmake_minimum_required(VERSION 3.29.6)

project(MaxAreaOfIsland LANGUAGES CXX)

add_library(max_area_of_island_solution max_area_of_island.cpp)
target_include_directories(max_area_of_island_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
