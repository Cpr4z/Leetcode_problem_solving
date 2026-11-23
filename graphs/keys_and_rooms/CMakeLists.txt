cmake_minimum_required(VERSION 3.29.6)

project(KeysAndRooms LANGUAGES CXX)

add_library(keys_and_rooms_solution keys_and_rooms.cpp)
target_include_directories(keys_and_rooms_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
