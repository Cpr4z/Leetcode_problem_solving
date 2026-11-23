cmake_minimum_required(VERSION 3.29.6)

project(RomanToInteger LANGUAGES CXX)

add_library(roman_to_integer_solution romanToInteger.cpp)
target_include_directories(roman_to_integer_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(roman_to_integer main.cpp)
target_link_libraries(roman_to_integer PRIVATE roman_to_integer_solution)
