cmake_minimum_required(VERSION 3.29.6)

project(SingleNumber LANGUAGES CXX)

add_library(single_number_solution single_number.cpp)
target_include_directories(single_number_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})