cmake_minimum_required(VERSION 3.29.6)

project(FindNearestClinic LANGUAGES CXX)

add_library(find_nearest_clinic_solution find_nearest_clinic.cpp)
target_include_directories(find_nearest_clinic_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
