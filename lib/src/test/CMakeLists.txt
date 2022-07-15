cmake_minimum_required(VERSION 3.13)
set(CMAKE_VERBOSE_MAKEFILE ON)

add_executable(tvl_test
   unit_test.cpp
)
target_link_libraries(tvl_test tvl)
