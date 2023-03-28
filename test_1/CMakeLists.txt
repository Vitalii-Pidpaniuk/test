cmake_minimum_required(VERSION 3.24)
project(test_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(test_1 main.cpp classes.h functions.h functions.cpp class.cpp class.h)
