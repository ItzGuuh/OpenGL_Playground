cmake_minimum_required(VERSION 3.17)
project(openGL)

set(CMAKE_CXX_STANDARD 20)
set(OpenGlLinkers -lglut -lGLU -lGL) # setting all the Glut libraries as one variable.


find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)
include_directories(${GLFW_INCLUDE_DIRS})


add_executable(openGL src/main.cpp)

#target_link_libraries(OpenGLLinuxTest1 ${OpenGlLinkers}) # linking opengl libraries to the project
target_link_libraries(${PROJECT_NAME} ${GLFW_LIBRARIES} ${OpenGlLinkers})
