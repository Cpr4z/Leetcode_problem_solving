cmake_minimum_required(VERSION 3.29.6)

project(SurroundedRegions LANGUAGES CXX)

add_library(surrounded_regions_solution surrounded_regions.cpp)
target_include_directories(surrounded_regions_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
