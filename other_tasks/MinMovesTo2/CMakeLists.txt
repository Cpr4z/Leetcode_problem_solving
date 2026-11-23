cmake_minimum_required(VERSION 3.29.6)

project(MinMovesTo2 LANGUAGES CXX)

add_library(min_moves_to_2_solution MinMovesTo2.cpp)
target_include_directories(min_moves_to_2_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(min_moves_to_2 main.cpp)
target_link_libraries(min_moves_to_2 PRIVATE min_moves_to_2_solution)
