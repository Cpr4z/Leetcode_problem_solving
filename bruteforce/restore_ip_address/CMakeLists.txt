cmake_minimum_required(VERSION 3.29.6)

project(RestoreIpAddress LANGUAGES CXX)

add_library(restore_ip_address_solution restore_ip_address.cpp)
target_include_directories(restore_ip_address_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})