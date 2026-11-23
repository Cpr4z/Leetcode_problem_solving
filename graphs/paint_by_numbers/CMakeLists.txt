cmake_minimum_required(VERSION 3.29.6)

project(PaintByNumbers LANGUAGES CXX)

add_library(paint_by_numbers_solution paint_by_numbers.cpp)
target_include_directories(paint_by_numbers_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
