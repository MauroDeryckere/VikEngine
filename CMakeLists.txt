# Top level CMake file for the project

# @REGION PROJECT SETUP

cmake_minimum_required (VERSION 3.27)

# Any output by targets -> binary dir
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

# prevent installing to system directories. 
set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}" CACHE INTERNAL "")

# Project name
project ("VIKENGINE")

# Set the name of the executable
set(EXECUTABLE_NAME ${PROJECT_NAME})

if(MSVC)
    if(NOT CMAKE_GENERATOR STREQUAL "Ninja")
        add_definitions(/MP) # parallelize each target, unless Ninja is the generator
    endif()
endif()

if (APPLE)
    # Disable shared builds on platforms where it does not make sense to use them
    set(BUILD_SHARED_LIBS OFF CACHE INTERNAL "")
endif()

# @ENDREGION PROJECT SETUP

# @REGION SOURCE FILES & LIBRARIES

# Include sub-projects.
add_subdirectory ("Libs")
add_subdirectory ("Engine")
message(STATUS "Engine target created: ${Engine}")
add_subdirectory ("Game")
message(STATUS "Game target created: ${Game}")

# @ENDREGION SOURCE FILES & LIBRARIES



# on Visual Studio, set our app as the default project
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Game)
