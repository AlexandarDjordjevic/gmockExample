cmake_minimum_required(VERSION 3.8)

set(this tests)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)


set(source
    student_tests.cpp
  )

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(${this} ${source})

# Link runTests with what we want to test and the GTest and pthread library
target_link_libraries(${this} 
            gtest
            gtest_main
            gmock
            pthread
            student
            )

add_test(
  NAME ${this}
  COMMAND ${this}
)