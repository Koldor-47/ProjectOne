cmake_minimum_required(VERSION 3.0.0)
project(AOC2021 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(AOC2021 main_aoc.cpp day1.cpp day2.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
