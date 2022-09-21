cmake_minimum_required(VERSION 3.23)
project(easy)

set(CMAKE_CXX_STANDARD 98)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "*.cpp")
file(GLOB_RECURSE HEADER RELATIVE ${CMAKE_SOURCE_DIR} "*.hpp")

add_executable(easy ${SOURCES} easyfind.hpp main.cpp ../ex01/span.cpp ../ex01/span.hpp)