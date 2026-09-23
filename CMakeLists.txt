cmake_minimum_required(VERSION 3.20)

project(PrimeNumberProject CXX)

add_library(PrimeNumberLib
  src/Prime.cpp
  src/Prime.h
)

add_executable(PrimeNumber main.cpp)

target_link_libraries(PrimeNumber PRIVATE PrimeNumberLib)