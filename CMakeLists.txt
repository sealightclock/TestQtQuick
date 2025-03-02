cmake_minimum_required(VERSION 3.16)
project(TestQtQuick VERSION 1.0 LANGUAGES CXX)

# Enable AUTOMOC to handle Qt meta-object compiler requirements
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Find Qt
find_package(Qt6 REQUIRED COMPONENTS Quick)

# Setup Executable
add_executable(TestQtQuick main.cpp)

# Define QML Module
qt_add_qml_module(TestQtQuick
    URI my.qml.module
    VERSION 1.0
    QML_FILES
        qml/transitions/Main.qml
        qml/components/Page.qml
    RESOURCES
        images/qt-logo.png  # ✅ Explicitly include the image file
)

# This may not always be needed, but is safe.
#     The image is bundled in the QML module.
#     Other parts of Qt (like C++ QFile or QImage) can also access the image.
qt_add_resources(TestQtQuick "resources"
    PREFIX "/"
    FILES
        images/qt-logo.png
)

# Link Libraries
target_link_libraries(TestQtQuick PRIVATE Qt6::Quick)
