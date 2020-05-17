cmake_minimum_required(VERSION 3.4)
project(main)

# glib-2.0
find_package(PkgConfig)
pkg_check_modules(GLIB2 REQUIRED glib-2.0)
include_directories(${GLIB2_INCLUDE_DIRS})

# libxml-2.0
find_package(PkgConfig)
pkg_check_modules(LIBXML2 REQUIRED libxml-2.0)
include_directories(${LIBXML2_INCLUDE_DIRS})


add_executable(queue queue.c)
target_link_libraries(queue ${GLIB2_LIBRARIES})

add_executable(list list.c)
target_link_libraries(list ${GLIB2_LIBRARIES})

add_executable(sort sort.c)
target_link_libraries(sort ${GLIB2_LIBRARIES})

add_executable(xml xml.c)
target_link_libraries(xml ${LIBXML2_LIBRARIES})
