cmake_minimum_required(VERSION 3.29.6)

project(MissingNumber LANGUAGES CXX)

add_library(missing_number_solution missing_number.cpp)
target_include_directories(missing_number_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})