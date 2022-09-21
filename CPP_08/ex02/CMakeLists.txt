cmake_minimum_required(VERSION 3.23)
project(Mutan)

set(CMAKE_CXX_STANDARD 98)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "*.cpp")
file(GLOB_RECURSE HEADER RELATIVE ${CMAKE_SOURCE_DIR} "*.hpp")

add_executable(Mutan ${SOURCES} main.cpp MutantStack.hpp)