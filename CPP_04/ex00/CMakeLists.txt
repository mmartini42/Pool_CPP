cmake_minimum_required(VERSION 3.23)
project(EX00)

set(CMAKE_CXX_STANDARD 98)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp")
file(GLOB_RECURSE HEADER RELATIVE ${CMAKE_SOURCE_DIR} "inc/*.hpp")

include_directories(inc)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -std=c++98")

add_executable(Polymorphism $(SOURCES))
