cmake_minimum_required(VERSION 3.14)
project(hfsm2_spike CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_DEBUG_POSTFIX "d")
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(PROJECT_GNU_COMPILE_FLAGS -Wall -Wextra -Wpedantic -Werror)

file(GLOB HEADERS src/*.h)
file(GLOB SOURCES src/*.cpp)

add_executable(hfsm2_spike ${SOURCES} ${HEADERS})
target_link_options(hfsm2_spike
        PRIVATE
        ${PROJECT_LINK_OPTIONS}
        )

target_include_directories(hfsm2_spike
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        )

