cmake_minimum_required(VERSION 3.29.6)

project(MinMultiply LANGUAGES CXX)

add_library(min_multiply_solution min_multiply.cpp)
target_include_directories(min_multiply_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})