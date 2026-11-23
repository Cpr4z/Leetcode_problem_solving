cmake_minimum_required(VERSION 3.29.6)

project(DocumentsSendOrder LANGUAGES CXX)

add_library(documents_send_order_solution documents_send_order.cpp)
target_include_directories(documents_send_order_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
