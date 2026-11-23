cmake_minimum_required(VERSION 3.29.6)

project(MinMovesTo LANGUAGES CXX)

add_library(min_moves_to_solution minMovesTo.cpp)
target_include_directories(min_moves_to_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(min_moves_to main.cpp)
target_link_libraries(min_moves_to PRIVATE min_moves_to_solution)
