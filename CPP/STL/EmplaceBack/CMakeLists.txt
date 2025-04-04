cmake_minimum_required(VERSION 3.30)
message(INFO " Current Source Directory: ${CMAKE_CURRENT_SOURCE_DIR}")

# Find all .cpp files in the src directory
file(GLOB SOURCES "*.cpp") 

# Specify the directory for executables 
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/bin")

# Loop through each source file and create an executable 
foreach(SOURCE_FILE ${SOURCES}) 
    # Get the filename without the extension 
    get_filename_component(FILE_NAME ${SOURCE_FILE} NAME_WE)
    
    # Add an executable for each file 
    add_executable(${FILE_NAME} ${SOURCE_FILE}) 

    # Set the output directory for the executable 
    set_target_properties(${FILE_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${EXECUTABLE_OUTPUT_PATH} )
endforeach()
