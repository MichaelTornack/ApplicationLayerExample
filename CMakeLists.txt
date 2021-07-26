cmake_minimum_required(VERSION 3.12)

set (PROJECT_NAME ApplicationLayerExample)
project(${PROJECT_NAME} LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core REQUIRED)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(external/googletest)
