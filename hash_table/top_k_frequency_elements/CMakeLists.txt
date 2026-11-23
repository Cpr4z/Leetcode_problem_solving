cmake_minimum_required(VERSION 3.29.6)

project(Sort012 LANGUAGES CXX)

add_library(top_k_frequency_elements_solution top_k_frequency_elements.cpp)
target_include_directories(top_k_frequency_elements_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})