cmake_minimum_required(VERSION 3.5)
project(AOC2021 VERSION 0.1.0)

set(day1_files
        day1.cpp
        day1.h
        )
add_library(day1 ${day1_files})