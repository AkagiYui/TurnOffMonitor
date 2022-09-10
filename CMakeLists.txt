cmake_minimum_required(VERSION 3.23)
project(TurnOffMonitor C)

set(CMAKE_C_STANDARD 23)

add_link_options(/SUBSYSTEM:WINDOWS)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:DebugDLL>")

add_executable(TurnOffMonitor main.c)
