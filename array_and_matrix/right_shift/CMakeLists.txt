cmake_minimum_required(VERSION 3.29.6)

project(RightShift LANGUAGES CXX)

add_library(right_shift_solution right_shift.cpp)
target_include_directories(right_shift_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})