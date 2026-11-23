cmake_minimum_required(VERSION 3.29.6)

project(NumberOfIslandsII LANGUAGES CXX)

add_library(number_of_islands_ii_solution number_of_islands_ii.cpp)
target_include_directories(number_of_islands_ii_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
