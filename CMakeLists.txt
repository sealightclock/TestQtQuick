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

file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/qml)

# Define QML Module
qt_add_qml_module(TestQtQuick
    URI transitions
    VERSION 1.0
    QML_FILES
        qml/transitions/Main.qml
        qml/components/CustomButton.qml
    RESOURCES
        qml.qrc
)

# Link Libraries
target_link_libraries(TestQtQuick PRIVATE Qt6::Quick)
