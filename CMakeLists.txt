cmake_minimum_required(VERSION 3.8)
project(c)

set(CMAKE_C_STANDARD 11)
link_libraries(libcurl)

set(SOURCE_FILES main.c)
add_executable(c ${SOURCE_FILES})