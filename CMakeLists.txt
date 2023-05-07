cmake_minimum_required(VERSION 3.0.0)
project(glibc-shorts VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(glibc-shorts-string-length string_h/string_length.c)
add_executable(glibc-shorts-copy-string string_h/copy_string.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
