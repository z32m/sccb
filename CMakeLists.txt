cmake_minimum_required(VERSION 3.20.0)

set(lib sccb)

file(GLOB SRCSC "./*.c")
file(GLOB SRCSH "./*.h")
add_library(${lib} ${SRCSH} ${SRCSC})
target_link_libraries(${lib} PUBLIC zephyr_interface)
target_link_libraries(${lib} PUBLIC zephyr_interface)
target_include_directories(${lib} PUBLIC ./)
target_link_libraries(${lib} PUBLIC kernel)