cmake_minimum_required(VERSION 3.12)
project(Labo_09_nbreJours)

set(CMAKE_CXX_STANDARD 11)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wconversion -Wextra -pedantic")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(Labo_09_nbreJours Labo_09_Becaud_Egremy.cpp dates.cpp dates.h annexe.cpp)