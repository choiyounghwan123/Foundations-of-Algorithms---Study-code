cmake_minimum_required(VERSION 3.27)
project(FoundationsOfAlgorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(FoundationsOfAlgorithms main.cpp
        ch1/exchange_sort.h
        ch1/exchange_sort.cpp
        ch1/binarySearch.h
        ch1/binarySearch.cpp
        ch1/fib.h
        ch1/fib.cpp)
