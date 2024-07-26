cmake_minimum_required(VERSION 3.20)

# Set the project name
project(NoteApp)

# Find the Qt libraries
find_package(Qt6 COMPONENTS Widgets REQUIRED)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the include directory
include_directories(include)

# Add the UI file to the project
set(UI_FILES forms/mainwindow.ui)

# Add the resource file to the project
set(RESOURCE_FILES resources/NoteApp.qrc)

# Enable automatic MOC, UIC, and RCC processing
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Specify the source directory for generated files
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Add the executable
add_executable(NoteApp
    src/main.cpp
    src/mainwindow.cpp
    include/mainwindow.h
    forms/mainwindow.ui
    resources/NoteApp.qrc
    ${UI_FILES}
    ${RESOURCE_FILES}
)

# Link the Qt libraries
target_link_libraries(NoteApp Qt6::Widgets)
