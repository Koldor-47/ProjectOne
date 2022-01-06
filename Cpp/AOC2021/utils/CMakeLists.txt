cmake_minimum_required(VERSION 3.5)
project(AOC2021 VERSION 0.1.0)

set(utils_files
        utils.cpp
        utils.h
        )
add_library(utils ${utils_files})