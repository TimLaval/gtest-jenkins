file(GLOB SOURCES "*.cpp")

add_library(main_lib ${SOURCES})
add_executable(main_exec main.cpp)

target_link_libraries(main_exec main_lib)
