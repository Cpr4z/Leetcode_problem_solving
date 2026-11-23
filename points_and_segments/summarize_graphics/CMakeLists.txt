cmake_minimum_required(VERSION 3.29.6)

project(SummarizeGraphics LANGUAGES CXX)

add_library(summarize_graphics_solution summarize_graphics.cpp)
target_include_directories(summarize_graphics_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})