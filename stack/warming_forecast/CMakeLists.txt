cmake_minimum_required(VERSION 3.29.6)

project(WarmingForecast LANGUAGES CXX)

add_library(warming_forecast_solution warming_forecast.cpp)
target_include_directories(warming_forecast_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(warming_forecast_solution PUBLIC cxx_std_20)