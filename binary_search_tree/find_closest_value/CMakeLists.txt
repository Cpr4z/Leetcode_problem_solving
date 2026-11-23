cmake_minimum_required(VERSION 3.29.6)

project(FindClosestValue LANGUAGES CXX)

add_library(find_closest_value_solution find_closest_value.cpp)
target_include_directories(find_closest_value_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})