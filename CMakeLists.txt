cmake_minimum_required(VERSION 3.10)
project(DNASequencing)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled Source/main.cpp Headers/DNA.h Source/DNA.cpp Headers/Random.h Source/RNA.cpp Headers/RNA.h)