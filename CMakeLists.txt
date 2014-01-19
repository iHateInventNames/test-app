cmake_minimum_required(VERSION 2.8)

if(CMAKE_COMPILER_IS_GNUCXX)
    add_definitions(-std=c++11)
endif()

include_directories(shared)

list(APPEND shared_libs shared)

add_subdirectory(shared)
add_subdirectory(server)
add_subdirectory(client)

