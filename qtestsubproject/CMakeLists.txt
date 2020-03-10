cmake_minimum_required(VERSION 3.5)

project(Qtestudemy LANGUAGES CXX)



find_package(Qt5Test REQUIRED)
find_package(Qt5Gui REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
enable_testing()
#including the path and source file of the function to be checked
include_directories(H:/extralearning/udemy/cpp/Udemy_Tutorial_Qtest/Qtqtesttut1)
add_executable(Qtestudemy H:/extralearning/udemy/cpp/Udemy_Tutorial_Qtest/Qtqtesttut1/udemytut1.cpp
    H:/extralearning/udemy/cpp/Udemy_Tutorial_Qtest/Qtqtesttut1/udemytut2.cpp
    H:/extralearning/udemy/cpp/Udemy_Tutorial_Qtest/Qtqtesttut1/udemypointerchallenge.cpp
    H:/extralearning/udemy/cpp/Udemy_Tutorial_Qtest/Qtqtesttut1/mystring.cpp

    tst_qtestudemy.cpp)
add_test(NAME Qtestudemy COMMAND Qtestudemy)

target_link_libraries(Qtestudemy PRIVATE Qt5::Gui Qt5::Test)

