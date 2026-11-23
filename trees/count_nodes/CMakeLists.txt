cmake_minimum_required(VERSION 3.29.6)

project(CountNodes LANGUAGES CXX)

add_library(count_nodes_solution count_nodes.cpp)
target_include_directories(count_nodes_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})