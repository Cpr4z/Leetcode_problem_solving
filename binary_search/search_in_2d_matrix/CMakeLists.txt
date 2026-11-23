cmake_minimum_required(VERSION 3.29.6)

project(SearchIn2DMatrix LANGUAGES CXX)

add_library(search_in_2d_matrix_solution search_in_2d_matrix.cpp)
target_include_directories(search_in_2d_matrix_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})