cmake_minimum_required(VERSION 3.29.6)

project(3InARow LANGUAGES CXX)

add_library(3_in_a_row_solution 3_in_a_row.cpp)
target_include_directories(3_in_a_row_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(3_in_a_row_solution PUBLIC cxx_std_20)