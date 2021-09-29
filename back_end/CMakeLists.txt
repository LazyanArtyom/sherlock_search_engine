cmake_minimum_required(VERSION 3.16)
project(sherlock)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE sources src/**.cpp src/**.h resource/**.cpp resource/**.h)

add_executable(sherlock src/main.cpp ${sources})

target_link_libraries(sherlock restbed)