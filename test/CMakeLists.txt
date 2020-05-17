cmake_minimum_required(VERSION 3.4)
project(main)

add_executable(sort_test sort.c sort_test.c)
target_link_libraries(sort_test cunit)

set(CMAKE_CXX_FLAGS "-g -DDMALLOC")
add_executable(mdebug mdebug.c)
target_link_libraries(mdebug dmalloc)
