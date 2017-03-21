cmake_minimum_required(VERSION 2.8.11)

project(tf-parser)

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror -g -fPIC")

find_package(Qt5Core 5.5 REQUIRED)
find_package(Qt5Gui 5.5 REQUIRED)
find_package(Qt5Widgets 5.5 REQUIRED)
find_package(Qt5OpenGL 5.5 REQUIRED)
find_package(Qt5OpenGLExtensions 5.5 REQUIRED)
find_package(Qt5Quick 5.5 REQUIRED)
find_package(Qt5Xml 5.5 REQUIRED)

include_directories(${Qt5Core_INCLUDE_DIRS})
include_directories(${Qt5Widgets_INCLUDE_DIRS})
include_directories(${Qt5OpenGL_INCLUDE_DIRS})
include_directories(${Qt5OpenGLExtensions_INCLUDE_DIRS})
include_directories(${Qt5Gui_INCLUDE_DIRS})
include_directories(${Qt5Quick_INCLUDE_DIRS})
include_directories(${Qt5Xml_INCLUDE_DIRS})
list(APPEND QT_LIBRARIES
  Qt5::Core
  Qt5::Widgets
  Qt5::OpenGL
  Qt5::OpenGLExtensions
  Qt5::Gui
  Qt5::Quick
  Qt5::Xml
  )

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})



add_executable(tests
  src/transfer_function_parser.cpp
  src/test_transfer_function_parser.cc
  src/main.cc)

target_link_libraries(tests
  ${GTEST_LIBRARIES}
  ${CMAKE_THREAD_LIBS_INIT}
  ${QT_LIBRARIES}
  )
