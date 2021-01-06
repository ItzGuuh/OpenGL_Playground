cmake_minimum_required(VERSION 3.17)
project(openGL)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} src/main.cpp src/renderer.h src/renderer.cpp src/vertexBuffer.cpp src/vertexBuffer.h
        src/indexBuffer.cpp src/indexBuffer.h)

target_link_libraries(${PROJECT_NAME} -lglut -lGLU -lGL -lGLEW -lglfw)
