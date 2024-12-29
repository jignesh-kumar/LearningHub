cmake_minimum_required(VERSION 3.22)

message(INFO " Cmake Version : "${CMAKE_VERSION})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find all .cpp files in the src directory 
file(GLOB SOURCES "*.cpp") 

# Loop through each source file and create an executable 
foreach(SOURCE_FILE ${SOURCES}) 
    # Get the filename without the extension 
    get_filename_component(FILE_NAME ${SOURCE_FILE} NAME_WE) 
    
    # Add an executable for each file 
    add_executable(${FILE_NAME} ${SOURCE_FILE}) 
endforeach()