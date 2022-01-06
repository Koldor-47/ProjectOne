cmake_minimum_required(VERSION 3.0.0)
project(AOC2021 VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(day1 day2 utils)
link_directories(day1 day2 utils)

add_subdirectory(day1)
add_subdirectory(day2)
add_subdirectory(utils)

add_executable(AOC2021 main_aoc.cpp )
target_link_libraries(${PROJECT_NAME} day1)
target_link_libraries(${PROJECT_NAME} day2)
target_link_libraries(${PROJECT_NAME} utils)

set(BUILD_SHARED_LIBS)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
