cmake_minimum_required(VERSION 3.29.6)

project(IsMonotonic LANGUAGES CXX)

add_library(is_monotonic_solution is_monotonic.cpp)
target_include_directories(is_monotonic_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})