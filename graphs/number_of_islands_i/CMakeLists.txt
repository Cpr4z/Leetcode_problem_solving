cmake_minimum_required(VERSION 3.29.6)

project(NumberOfIslandsI LANGUAGES CXX)

add_library(number_of_islands_i_solution number_of_islands_i.cpp)
target_include_directories(number_of_islands_i_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
