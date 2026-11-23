cmake_minimum_required(VERSION 3.29.6)

project(SearchMonotonSeq LANGUAGES CXX)

add_library(search_monoton_seq_solution search_monoton_seq.cpp)
target_include_directories(search_monoton_seq_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})