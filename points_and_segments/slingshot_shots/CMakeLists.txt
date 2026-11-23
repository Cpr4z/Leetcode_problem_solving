cmake_minimum_required(VERSION 3.29.6)

project(SlingshotShots LANGUAGES CXX)

add_library(slingshot_shots_solution slingshot_shots.cpp)
target_include_directories(slingshot_shots_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(slingshot_shots_solution PUBLIC cxx_std_20)