# add_executable (demo main.cpp)
# target_link_libraries (demo Sqr)

# boost may be used in the future
# find_package(Boost)
# if (Boost_FOUND)
  # include_directories(${Boost_INCLUDE_DIR})
# endif()
# set(Boost_USE_STATIC_LIBS ON) # static linking of boost library
# set(Boost_USE_MULTITHREAD ON) # enable multithreading
# find_package(Boost COMPONENTS REQUIRED chrono filesystem log)
# target_link_libraries(${PROJECT_NAME} chemstab-lib Boost)

set(INCLUDE_DIR ./src)

set(INCLUDE_FILES
  ${INCLUDE_DIR}/chem/Chemical.hpp
  ${INCLUDE_DIR}/chem/Compound.hpp
  ${INCLUDE_DIR}/chem/Compound.cpp
  )
include_directories(${INCLUDE_DIR})
add_library(chemstab-lib
  ${INCLUDE_FILES}
  )

add_executable(${PROJECT_NAME} main.cpp ${INCLUDE_FILES})
  # ${SOURCE_FILES}
# TODO once the graph stuff is working properly, include those sources
# ${INCLUDE_DIR}/chem/graphs/Node.cpp
# ${INCLUDE_DIR}/chem/graphs/Edge.cpp
# ${INCLUDE_DIR}/chem/graphs/WeightedEdge.cpp
# ${INCLUDE_DIR}/chem/graphs/EdgeNodePair.cpp
# ${INCLUDE_DIR}/chem/graphs/Graph.cpp


