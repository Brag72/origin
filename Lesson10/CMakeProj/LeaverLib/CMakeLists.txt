cmake_minimum_required(VERSION 3.22.0)
project(LeaverLib)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(LeaverLib SHARED Leaver.cpp)
target_include_directories(LeaverLib PUBLIC include)