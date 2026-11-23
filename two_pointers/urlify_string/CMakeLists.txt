cmake_minimum_required(VERSION 3.29.6)

project(UrlifyString LANGUAGES CXX)

add_library(urlify_string_solution urlify_string.cpp)
target_include_directories(urlify_string_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})