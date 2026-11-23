cmake_minimum_required(VERSION 3.29.6)

project(RemovalOfBraces LANGUAGES CXX)

add_library(closest_symbol_solution closest_symbol.cpp)
target_include_directories(closest_symbol_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(closest_symbol_solution PUBLIC cxx_std_20)