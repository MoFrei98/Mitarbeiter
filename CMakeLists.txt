cmake_minimum_required(VERSION 3.28)
project(Mitarbeiter)

set(CMAKE_CXX_STANDARD 17)

add_executable(Mitarbeiter main.cpp
        AllInOne_Mitarbeiter.cpp
        AllInOne_Angestellter.cpp
        Mitarbeiter.cpp
        Mitarbeiter.h
        Angestellter.cpp
        Angestellter.h)
