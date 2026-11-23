cmake_minimum_required(VERSION 3.29.6)

project(IsGraphCycled LANGUAGES CXX)

add_library(is_graph_cycled_solution is_graph_cycled.cpp)
target_include_directories(is_graph_cycled_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
