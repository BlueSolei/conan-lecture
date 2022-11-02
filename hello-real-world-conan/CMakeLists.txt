cmake_minimum_required(VERSION 3.16)
project(hello)

set(CMAKE_CXX_STANDARD 20)

find_package(crowcpp-crow)

add_executable(hello)
target_sources(hello PRIVATE main.cpp)
target_link_libraries(hello PRIVATE crowcpp-crow::crowcpp-crow)

install(TARGETS hello)