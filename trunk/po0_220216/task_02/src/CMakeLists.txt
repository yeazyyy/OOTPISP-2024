cmake_minimum_required(VERSION 3.15.0)

project(LAB_02_220216)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)



set(SOURCE_FILES  Lab-2.cpp
Empl.cpp Engineer.cpp Person.cpp Worker.cpp)

set(HEADER_FILES Empl.h Engineer.h Person.h Worker.h)

set(ALL_SOURCES ${HEADER_FILES}
                ${SOURCE_FILES})


add_executable(${PROJECT_NAME} ${ALL_SOURCES})
