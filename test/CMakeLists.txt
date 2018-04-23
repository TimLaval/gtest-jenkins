enable_testing()

file(GLOB TESTS "*.cpp")

add_executable(Test ${TESTS})

target_link_libraries(Test ${GTEST_LIBRARIES} pthread)

target_link_libraries(Test main_lib)

add_test(NAME allTest COMMAND Test)
