cmake_minimum_required(VERSION 3.15)
project(exec_test C)

set(CMAKE_C_STANDARD 99)

add_executable(exec_test main.c digital_pin.c vdm22.h analog_pin.c gameplay.c bogey.c)