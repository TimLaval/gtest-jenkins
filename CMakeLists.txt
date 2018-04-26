cmake_minimum_required( VERSION 2.8.11 )
project( test )

find_package( GTest REQUIRED )
include_directories( ${GTEST_INCLUDE_DIRS})

add_subdirectory( test )
