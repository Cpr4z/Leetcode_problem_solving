cmake_minimum_required(VERSION 3.29.6)

project(DeleteSeveralNodes LANGUAGES CXX)

add_library(delete_several_nodes_solution delete_several_nodes.cpp)
target_include_directories(delete_several_nodes_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})