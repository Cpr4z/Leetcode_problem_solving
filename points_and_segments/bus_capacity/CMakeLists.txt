cmake_minimum_required(VERSION 3.29.6)

project(BusCapacity LANGUAGES CXX)

add_library(bus_capacity_solution bus_capacity.cpp)
target_include_directories(intersect_intervals_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(intersect_intervals_solution PUBLIC cxx_std_20)