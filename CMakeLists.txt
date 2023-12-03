cmake_minimum_required(VERSION 3.27)
project(Algorytmy8cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(Algorytmy8cpp main.cpp
        prototypy.h
        sort_przez_wstawianie.cpp
        sort_babelkowe.cpp
        mergesort.cpp
        quicksort.cpp
        "odczyt z pliku.cpp")
