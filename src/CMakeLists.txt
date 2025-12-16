qt_add_executable(KumaQtTest MainWindow.ui
                             KumaGLWidget.hpp
                             KumaGLWidget.cpp
                             MainWindow.hpp
                             MainWindow.cpp
                             main.cpp)
target_include_directories(KumaQtTest PRIVATE .)
target_link_libraries(KumaQtTest PRIVATE Qt6::Core Qt6::Widgets Qt6::OpenGLWidgets)

set_target_properties(KumaQtTest PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)