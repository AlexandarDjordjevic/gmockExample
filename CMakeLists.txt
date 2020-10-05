cmake_minimum_required(VERSION 3.8)

project(Student)

set(this student)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

set(include
    include/Student.hpp
    include/IDatabase.hpp
)

set(source
    source/Student.cpp
)

add_library(${this} ${source})

target_include_directories(${this} PUBLIC include)

#target_link_libraries(${this})

add_subdirectory(tests)
