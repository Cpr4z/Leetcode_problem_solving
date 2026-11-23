cmake_minimum_required(VERSION 3.29.6)

project(ValidSudoku LANGUAGES CXX)

add_library(valid_sudoku_solution valid_sudoku.cpp)
target_include_directories(valid_sudoku_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(valid_sudoku_solution PUBLIC cxx_std_20)