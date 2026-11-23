cmake_minimum_required(VERSION 3.29.6)

project(MultiplyBigNumber LANGUAGES CXX)

add_library(multiply_big_number_solution multiply_big_number.cpp)
target_include_directories(multiply_big_number_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})