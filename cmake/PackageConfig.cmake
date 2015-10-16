# Find packages of dependencies
include(CMakeFindDependencyMacro)

set(@PROJECT_NAME@_WITH_QT4 @WITH_QT4@)
if(@PROJECT_NAME@_WITH_QT4)
    find_dependency(Qt4 4.8.0 REQUIRED QtGui QtWebKit)
else()
    find_dependency(Qt5Widgets REQUIRED)
    find_dependency(Qt5PrintSupport REQUIRED)
    find_dependency(Qt5WebKitWidgets REQUIRED)
endif()

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/modules")

# Include target definition (includes and definition)
include("${CMAKE_CURRENT_LIST_DIR}/@PROJECT_NAME@Targets.cmake")