cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Setting up the project name and version
project(GrumpyShell VERSION 2.0.1)

#Collecting the SRC .cpp files from GrumpyShell
file(GLOB_RECURSE SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}src/*.cpp)

add_executable(GrumpyShell ${SRC_FILES})

#Collecting the SRC FILES for the GrumpyTools Lib
file(GLOB_RECURSE GrumpyTools_SRC ${CMAKE_CURRENT_SOURCE_DIR}../GrumpyTools/src/*.cpp)

#Collecting the HPP from the GrumpyTools Lib
file(GLOB_RECURSE GrumpyTools_HPP ${CMAKE_CURRENT_SOURCE_DIR}../GrumpyTools/src/*.cpp)

add_library(GrumpyTools STATIC ${GrumpyTools_HPP} ${GrumpyTools})

target_link_libraries(GrumpyShell PUBLIC GrumpyTools)
#adds the directories that are in the include directory
target_include_directories(GrumpyShell PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
