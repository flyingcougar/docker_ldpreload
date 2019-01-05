cmake_minimum_required (VERSION 2.6)

project (ldexample)

add_library(urandom SHARED rlib/urandom.c)
add_executable(ldexample ldexample.cpp)
add_executable(ldexample_ld ldexample.cpp)
target_link_libraries(ldexample_ld urandom)
