cmake_minimum_required(VERSION 3.10)

project(distances)

include(CTest)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

find_package(GTest REQUIRED)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}-uts
        distances_tests.cpp)

target_link_libraries(${PROJECT_NAME}-uts
    PRIVATE
        GTest::Main)

add_test(NAME ${PROJECT_NAME}-uts COMMAND ${PROJECT_NAME}-uts)
