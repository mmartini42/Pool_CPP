cmake_minimum_required(VERSION 3.23)
project(bureaucrat)

set(CMAKE_CXX_STANDARD 98)

include_directories(ex00)
include_directories(ex01)
include_directories(ex02)
include_directories(ex03)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "*.cpp")
file(GLOB_RECURSE HEADER RELATIVE ${CMAKE_SOURCE_DIR} "*.hpp")

add_executable(bureaucrat ${SOURCES} Bureaucrat.cpp Bureaucrat.hpp main.cpp Form.cpp Form.hpp)