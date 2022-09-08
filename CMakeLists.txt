cmake_minimum_required(VERSION 3.20)

project(HelloWxWidgets)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WIN32_EXECUTABLE TRUE)

set(INC "./include")
set(SRC "./source")

# Find required libraries
FIND_PACKAGE(wxWidgets REQUIRED richtext aui adv html core xml net base) 

# Include library use files
include(${wxWidgets_USE_FILE})

# Add include directories
include_directories(${INC})

# Add link directories

# Add definitions

# Create executable
add_executable (hello_wx ${SRC}/app.cxx ${SRC}/frame.cxx)

# Link libraries
target_link_libraries (hello_wx ${wxWidgets_LIBRARIES})