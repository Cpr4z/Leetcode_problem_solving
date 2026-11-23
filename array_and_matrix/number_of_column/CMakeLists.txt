cmake_minimum_required(VERSION 3.29.6)

project(NumberOfColumn LANGUAGES CXX)

add_library(number_of_column_solution number_of_column.cpp)
target_include_directories(number_of_column_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})