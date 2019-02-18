cmake_minimum_required(VERSION 3.1)
project (ChemStab)
add_definitions("-std=c++17" "-Wall" "-Wextra" "-pedantic" "-Wunused-parameter" "-Wunused" "-pthread" "-Wnoexcept" "-Wshadow")
set(INCLUDE_DIR chemstab-lib/src/include)
include_directories(${PROJECT_SOURCE_DIR}/${INCLUDE_DIR})
set(SOURCES
  chemstab-bin/src/main/chem/main.cpp
  ${INCLUDE_DIR}/chem/Compound.cpp
  )
# TODO once the graph stuff is working properly, include those sources
  # ${INCLUDE_DIR}/chem/graphs/Node.cpp
  # ${INCLUDE_DIR}/chem/graphs/Edge.cpp
  # ${INCLUDE_DIR}/chem/graphs/WeightedEdge.cpp
  # ${INCLUDE_DIR}/chem/graphs/EdgeNodePair.cpp
  # ${INCLUDE_DIR}/chem/graphs/Graph.cpp
add_executable(${PROJECT_NAME} ${SOURCES})

