cmake_minimum_required(VERSION 3.29.6)

project(ReverseNumber LANGUAGES CXX)

add_library(reverse_number_solution reverse_number.cpp)
target_include_directories(reverse_number_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})