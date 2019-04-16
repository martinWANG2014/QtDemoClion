cmake_minimum_required(VERSION 3.5)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
project(QtDemoClion)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)


######QT5####
# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH $ENV{HOME}/Qt/5.12.2/gcc_64)

find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

######## Set executable file name, and add the source files for it.
add_executable(QtDemoClion ${SOURCE_FILES})

######## link the depenceies
target_link_libraries(QtDemoClion
        PUBLIC
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets)
