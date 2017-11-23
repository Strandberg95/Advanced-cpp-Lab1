cmake_minimum_required(VERSION 3.8)
project(cpp_adv_lab1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp headers/Link.h headers/List.h)
add_executable(cpp_adv_lab1 ${SOURCE_FILES})