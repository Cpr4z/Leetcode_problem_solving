cmake_minimum_required(VERSION 3.29.6)

project(BitCounting LANGUAGES CXX)

add_library(bit_counting_solution bit_counting.cpp)
target_include_directories(bit_counting_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})