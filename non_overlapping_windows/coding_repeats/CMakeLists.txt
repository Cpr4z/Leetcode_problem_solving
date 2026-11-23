cmake_minimum_required(VERSION 3.29.6)

project(BestSpotOnParking LANGUAGES CXX)

add_library(coding_repeats_solution coding_repeats.cpp)
target_include_directories(coding_repeats_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})