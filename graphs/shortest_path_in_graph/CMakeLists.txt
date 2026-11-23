cmake_minimum_required(VERSION 3.29.6)

project(ShortestPathInGraph LANGUAGES CXX)

add_library(shortest_path_in_graph_solution shortest_path_in_graph.cpp)
target_include_directories(shortest_path_in_graph_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
