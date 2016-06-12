cmake_minimum_required(VERSION 3.5)
project(csapp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
     "chapter 02/ex2.13.c")

add_executable(csapp ${SOURCE_FILES})