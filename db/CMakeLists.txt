cmake_minimum_required(VERSION 3.4)
project(main)

find_package(PkgConfig)
pkg_check_modules(SQLITE3 REQUIRED sqlite3)

add_executable(main main.c)
target_link_libraries(main ${SQLITE3_LIBRARIES})
