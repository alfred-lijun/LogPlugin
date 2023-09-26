cmake_minimum_required(VERSION 3.10)

# Remove when sharing with others.
list(APPEND CMAKE_PREFIX_PATH "D:/Qt/qtcreator-7.0.2")

project(LogPlugin)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)

find_package(QtCreator REQUIRED COMPONENTS Core)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
set(QtX Qt${QT_VERSION_MAJOR})

add_qtc_plugin(LogPlugin
  PLUGIN_DEPENDS
    QtCreator::Core
  DEPENDS
    ${QtX}::Widgets
    QtCreator::ExtensionSystem
    QtCreator::Utils
  SOURCES
    .github/workflows/build_cmake.yml
    .github/workflows/README.md
    README.md
    logplugin.cpp
    logplugin.h
    logplugin_global.h
    logpluginconstants.h
)

target_sources(LogPlugin
  PRIVATE
    LogCatClient.cpp LogCatClient.h LogCatWatcher.cpp LogCatWatcher.h
)
