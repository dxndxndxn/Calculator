cmake_minimum_required(VERSION 3.5)
project(Calculator VERSION 1.0)
set(CMAKE_CXX_STANDARD 20)

set(SOURCES ${CMAKE_SOURCE_DIR}/src/main.cpp)

add_executable(a ${SOURCES})