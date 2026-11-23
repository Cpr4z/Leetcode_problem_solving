cmake_minimum_required(VERSION 3.29.6)

project(FastPow LANGUAGES CXX)

add_library(fast_pow_solution fast_pow.cpp)
target_include_directories(fast_pow_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})