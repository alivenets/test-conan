cmake_minimum_required(VERSION 3.0.2)

project(TestConan)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)

conan_basic_setup()

add_executable(test-log4cplus log-main.cpp)

message("Conan found libs: ${CONAN_LIBS}")
target_link_libraries(TestConan PRIVATE ${CONAN_LIBS})

