cmake_minimum_required(VERSION 3.17)
project(lectureClavier C)

set(CMAKE_C_STANDARD 99)

add_library(lectureClavier SHARED library.c library.h)
add_executable(tests main.c)
target_link_libraries(tests lectureClavier)