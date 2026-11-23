cmake_minimum_required(VERSION 3.29.6)

project(LeastNumberOfEdges LANGUAGES CXX)

add_library(least_number_of_edges_solution least_number_of_edges.cpp)
target_include_directories(least_number_of_edges_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
