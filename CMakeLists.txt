cmake_minimum_required(VERSION 3.20)
project(cpp_playground)

message(STATUS "CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}")
message(STATUS "CMAKE_INSTALL_PREFIX=${CMAKE_INSTALL_PREFIX}")
message(STATUS "CMAKE_CURRENT_SOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR}")

set(CMAKE_C_COMPILER ${CMAKE_CURRENT_SOURCE_DIR}/third_party/gcc-14.1.0/bin/gcc-14.1.0)
set(CMAKE_CXX_COMPILER ${CMAKE_CURRENT_SOURCE_DIR}/third_party/gcc-14.1.0/bin/g++-14.1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED on)

file(GLOB source_list ${CMAKE_CURRENT_SOURCE_DIR}/*/*.cc ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)
message(STATUS "source_list=${source_list}")
add_executable(cpg ${source_list})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS cpg DESTINATION bin)
install(FILES scripts/run_cpg.sh DESTINATION scripts)