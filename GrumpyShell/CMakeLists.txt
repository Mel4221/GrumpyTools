cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Tester VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(GrumpyShell ${SRC_FILES})

#add_library(QuickTools STATIC ../../QuickTools/src/IO/Write.cpp)

#target_link_libraries(t PUBLIC QuickTools)
#adds the directories that are in the include directory
target_include_directories(GrumpyShell PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
