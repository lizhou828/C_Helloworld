# cmake_minimum_required(VERSION <specify CMake version here>)
project(helloWorld C)

set(CMAKE_C_STANDARD 99)

add_executable(helloWorld src/main.c src/test/test1.c src/test/test2.c src/2018-06-exam/exam.c src/dataStructAndAlgorithm/1线性表/LinkList.c src/dataStructAndAlgorithm/1线性表/createList.c)