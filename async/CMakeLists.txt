cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
project(async CXX)

add_executable(async main.cpp)
target_compile_features(async PRIVATE cxx_range_for)
