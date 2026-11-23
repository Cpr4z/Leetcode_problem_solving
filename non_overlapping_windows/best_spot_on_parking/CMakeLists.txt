cmake_minimum_required(VERSION 3.29.6)

project(BestSpotOnParking LANGUAGES CXX)

add_library(best_spot_on_parking_solution best_spot_on_parking.cpp)
target_include_directories(best_spot_on_parking_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})