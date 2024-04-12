cmake_minimum_required(VERSION 3.12)
project(pmo VERSION 1.0 LANGUAGES C CXX)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 20)
file(GLOB SOURCES CONFIGURE_DEPENDS
    ./src/*.cpp 
)
add_executable(pmo  ${SOURCES})
