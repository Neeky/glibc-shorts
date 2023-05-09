cmake_minimum_required(VERSION 3.0.0)
project(glibc-shorts VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(glibc-shorts-string-cmp string_h/string_compare.c)
add_executable(glibc-shorts-string-cat string_h/string_concat.c)
add_executable(glibc-shorts-string-copy string_h/string_copy.c)
add_executable(glibc-shorts-string-length string_h/string_length.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
