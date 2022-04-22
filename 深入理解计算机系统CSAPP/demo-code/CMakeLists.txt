cmake_minimum_required(VERSION 3.21)
project(demo_code C)

set(CMAKE_C_STANDARD 99)

add_executable(demo_code main.c)
add_executable(openFile openFile.c csapp.h)

add_executable(rio rio.c csapp.h)