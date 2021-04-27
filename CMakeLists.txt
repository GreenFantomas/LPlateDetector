cmake_minimum_required(VERSION 3.10)

project(LPlateDetector VERSION 1.0)

# config file
configure_file(Config.h.in Config.h)

# OpenCV lib
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(LPlateDetector main.cpp)

target_include_directories(LPlateDetector PUBLIC "${PROJECT_BINARY_DIR}")
target_link_libraries(LPlateDetector ${OpenCV_LIBS} )