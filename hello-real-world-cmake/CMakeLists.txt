cmake_minimum_required(VERSION 3.16)
project(hello)

set(CMAKE_CXX_STANDARD 20)

add_library(greet)
target_sources(greet PRIVATE greet.cpp PUBLIC greet.h)

add_executable(hello)
target_sources(hello PRIVATE main.cpp)
target_link_libraries(hello PRIVATE greet)

install(TARGETS hello)