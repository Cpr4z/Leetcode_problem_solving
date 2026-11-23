cmake_minimum_required(VERSION 3.29.6)

project(RightSide LANGUAGES CXX)

add_library(right_side_solution right_side.cpp)
target_include_directories(right_side_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})