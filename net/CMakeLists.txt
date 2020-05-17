cmake_minimum_required(VERSION 3.4)
project(main)


add_executable(server server.c)

add_executable(capture capture.c)
target_link_libraries(capture pcap)
