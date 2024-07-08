cmake_minimum_required(VERSION 3.28)
project(Test5 C)

set(CMAKE_C_STANDARD 11)

add_executable(Test5 test_6_30.c
        )
add_executable(test1
        test_7_2.c)
add_executable(test2 test_7_4.c)
add_executable(test3 test_7_5.c)
add_executable(test4 test_7_5_2.c)
add_executable(test6
        test_7_6.c)
add_executable(test7
        test_7_8.c)