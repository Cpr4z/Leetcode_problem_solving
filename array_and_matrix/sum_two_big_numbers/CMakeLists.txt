cmake_minimum_required(VERSION 3.29.6)

project(SumTwoBigNumbers LANGUAGES CXX)

add_library(sum_two_big_numbers_solution sum_two_big_numbers.cpp)
target_include_directories(sum_two_big_numbers_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})