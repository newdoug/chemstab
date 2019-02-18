cmake_minimum_required(VERSION 3.1)
project (ChemStab C CXX)
# version 0.1
set(${PROJECT_NAME}_VERSION_MAJOR 0)
set(${PROJECT_NAME}_VERSION_MINOR 1)

set(CMAKE_CXX_STANDARD 17) # C++17 standard
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra -pedantic -Wunused-parameter -Wunused -pthread -Wnoexcept -Wshadow")
add_definitions(${CMAKE_CXX_FLAGS})

option(RUN_TESTS "Run unit tests." ON)

set(M_LIB_DIR chemstab-lib)
set(M_BIN_DIR chemstab-bin)
add_subdirectory(${M_LIB_DIR})

if(RUN_TESTS)
  enable_testing()
  add_subdirectory(${M_LIB_DIR}/src/tests)
endif()

# set(TARGET ${PROJECT_NAME})
