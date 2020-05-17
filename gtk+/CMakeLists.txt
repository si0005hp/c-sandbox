cmake_minimum_required(VERSION 3.4)
project(main)

# glib-2.0
find_package(PkgConfig)
pkg_check_modules(GTK+2 REQUIRED gtk+-2.0)
include_directories(${GTK+2_INCLUDE_DIRS})


add_executable(hello hello.c)
target_link_libraries(hello ${GTK+2_LIBRARIES})

add_executable(button button.c)
target_link_libraries(button ${GTK+2_LIBRARIES})

add_executable(key key.c)
target_link_libraries(key ${GTK+2_LIBRARIES})
