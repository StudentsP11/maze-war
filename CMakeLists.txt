cmake_minimum_required(VERSION 3.22)
project(maze_war)

set(CMAKE_CXX_STANDARD 20)

add_executable(maze_war main.cpp)
find_package(OpenGL REQUIRED COMPONENTS OpenGL)
find_package(GLUT REQUIRED)

add_dependencies(maze_war ${OPENGL_LIBRARIES})
include_directories(${GLUT_INCLUDE_DIRS} )

target_link_libraries(maze_war ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )