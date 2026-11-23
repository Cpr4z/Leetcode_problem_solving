cmake_minimum_required(VERSION 3.29.6)

project(SimpleCalculator LANGUAGES CXX)

add_library(simple_calculator_solution simple_calculator.cpp)
target_include_directories(simple_calculator_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})