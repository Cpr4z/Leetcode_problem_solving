cmake_minimum_required(VERSION 3.29.6)

project(RestoreShortestPath LANGUAGES CXX)

add_library(restore_shortest_path_solution restore_shortest_path.cpp)
target_include_directories(restore_shortest_path_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
