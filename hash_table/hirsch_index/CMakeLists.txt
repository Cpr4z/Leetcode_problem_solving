cmake_minimum_required(VERSION 3.29.6)

project(HirschIndex LANGUAGES CXX)

add_library(hirsch_index_solution hirsch_index.cpp)
target_include_directories(hirsch_index_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(hirsch_index_solution PUBLIC cxx_std_20)