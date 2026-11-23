cmake_minimum_required(VERSION 3.29.6)

project(Calculator LANGUAGES CXX)

add_library(calculator_solution calculator.cpp)
target_include_directories(calculator_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})