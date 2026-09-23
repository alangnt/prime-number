cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(PrimeNumberProject CXX)

add_library(PrimeNumberLib
  src/Prime.cpp
  src/Prime.h
)

add_executable(PrimeNumber main.cpp)

target_link_libraries(PrimeNumber PRIVATE PrimeNumberLib)