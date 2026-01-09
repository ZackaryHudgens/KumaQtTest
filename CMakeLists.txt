cmake_minimum_required(VERSION 3.10.0)
project(KumaQtTest VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets OpenGLWidgets)

qt_standard_project_setup()

add_subdirectory(src)
