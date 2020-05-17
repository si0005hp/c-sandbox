cmake_minimum_required(VERSION 3.4)
project(main)

add_executable(main main.c)
target_link_libraries(main popt)
