cmake_minimum_required(VERSION 3.29.6)

project(SumHexNumbers LANGUAGES CXX)

add_library(sum_hex_numbers_solution sum_hex_numbers.cpp)
target_include_directories(sum_hex_numbers_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})