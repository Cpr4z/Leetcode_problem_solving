cmake_minimum_required(VERSION 3.29.6)

project(DistanceBetweenXY LANGUAGES CXX)

add_library(distance_between_xy_solution distance_between_X_Y.cpp)
target_include_directories(distance_between_xy_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})