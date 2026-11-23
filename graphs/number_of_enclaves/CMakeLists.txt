cmake_minimum_required(VERSION 3.29.6)

project(NumberOfEnclaves LANGUAGES CXX)

add_library(number_of_enclaves_solution number_of_enclaves.cpp)
target_include_directories(number_of_enclaves_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
