cmake_minimum_required(VERSION 3.16)
project(windsurf-session-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(windsurfsessiontool
    src/main.cpp
    src/r.cpp
    src/o.cpp
    src/t.cpp
    src/a.cpp
)

target_include_directories(windsurfsessiontool PRIVATE include)

if(WIN32)
    target_link_libraries(windsurfsessiontool PRIVATE userenv)
endif()
