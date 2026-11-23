cmake_minimum_required(VERSION 3.29.6)

project(SortedArraySquareNumbers LANGUAGES CXX)

add_library(sorted_square_solution sorted_square.cpp)
target_include_directories(sorted_square_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})