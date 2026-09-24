cmake_minimum_required(VERSION 3.20)

project(PrimeNumberProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(PrimeNumberLib
  src/prime.cpp
  src/prime.h
)

target_include_directories(PrimeNumberLib PUBLIC src)

add_executable(PrimeNumber main.cpp)

target_link_libraries(PrimeNumber PRIVATE PrimeNumberLib)


include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.17.0
)

FetchContent_MakeAvailable(googletest)

enable_testing()

# Test executable
add_executable(
  PrimeNumberTests
  tests/prime_test.cpp
)

target_link_libraries(
  PrimeNumberTests
  PRIVATE
  PrimeNumberLib
  GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(PrimeNumberTests)