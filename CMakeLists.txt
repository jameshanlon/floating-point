cmake_minimum_required(VERSION 3.12.0)
project(floating-point)
include(ExternalProject)
enable_testing()
set(Boost_USE_STATIC_LIBS ON)
find_package(Boost 1.68.0 REQUIRED COMPONENTS
             unit_test_framework)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
include_directories(${Boost_INCLUDE_DIRS})
add_executable(fp main.cpp)
target_compile_options(fp PUBLIC -Wall -pedantic)
target_link_libraries(fp
  ${Boost_LIBRARIES})
install(TARGETS fp
        DESTINATION bin)
