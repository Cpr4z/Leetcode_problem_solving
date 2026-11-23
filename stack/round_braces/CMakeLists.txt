cmake_minimum_required(VERSION 3.29.6)

project(RoundBraces LANGUAGES CXX)

add_library(round_braces_solution round_braces.cpp)
target_include_directories(round_braces_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(round_braces_solution PUBLIC cxx_std_20)