cmake_minimum_required(VERSION 3.1...3.22)
project(OOC 
    VERSION 0.1.0
    LANGUAGES C)

include(CTest)
enable_testing()

add_library(mySet Set.c Set.h)
add_library(myBag Bag.c)
add_library(myNew New.h)
add_library(myObj Object.h)

add_executable(OOC main.c)

target_link_libraries(OOC PRIVATE mySet myBag myNew myObj)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
