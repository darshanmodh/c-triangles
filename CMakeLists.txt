cmake_minimum_required(VERSION 3.5)
project(Triangles)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Star1.c Star2.c Star3.c Star4.c Star5.c Star6.c Number1.c Number2.c Alphabets1.c Alphabets2.c Number3.c Number4.c Number4.c)
add_executable(Triangles ${SOURCE_FILES})