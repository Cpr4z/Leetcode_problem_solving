cmake_minimum_required(VERSION 3.29.6)

project(TopologicalSort LANGUAGES CXX)

add_library(topological_sort_solution topological_sort.cpp)
target_include_directories(topological_sort_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
