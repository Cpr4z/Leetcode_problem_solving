cmake_minimum_required(VERSION 3.29.6)

project(Mosaic LANGUAGES CXX)

add_library(mosaic_solution mosaic.cpp)
target_include_directories(mosaic_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
