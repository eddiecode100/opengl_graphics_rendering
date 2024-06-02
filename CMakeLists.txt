cmake_minimum_required(VERSION 3.28)

project(my_opengl_project VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

cmake_policy(SET CMP0072 NEW)
set(OpenGL_GL_PREFERENCE "GLVND")

find_package(OpenGL REQUIRED)

find_package(glfw3 3.3 REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(my_opengl_project
    src/main.cpp
    src/cube.cpp
)

target_link_libraries(my_opengl_project PRIVATE OpenGL::GL glfw)
