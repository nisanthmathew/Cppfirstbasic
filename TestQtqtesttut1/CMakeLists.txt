cmake_minimum_required(VERSION 3.5)

project(TestQtqtesttut1 LANGUAGES CXX)


find_package(Qt5Test REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
enable_testing()

add_executable(TestQtqtesttut1 tst_testqtqtesttut1.cpp)
add_test(NAME TestQtqtesttut1 COMMAND TestQtqtesttut1)

target_link_libraries(TestQtqtesttut1 PRIVATE Qt5::Test)

