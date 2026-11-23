cmake_minimum_required(VERSION 3.29.6)

project(AgesStat LANGUAGES CXX)

add_library(ages_stat_solution ages_stat.cpp)
target_include_directories(ages_stat_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(ages_stat_solution PUBLIC cxx_std_20)