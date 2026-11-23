cmake_minimum_required(VERSION 3.29.6)

project(PowerOfTwo LANGUAGES CXX)

add_library(power_of_two_solution power_of_two.cpp)
target_include_directories(power_of_two_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})