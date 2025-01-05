cmake_minimum_required(VERSION 3.22)

message(INFO " Current Source Directory: ${CMAKE_CURRENT_SOURCE_DIR}")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Macro to add all subdirectories
macro(add_all_subdirectories)
    file(GLOB SUBDIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/*)
    foreach(SUBDIR ${SUBDIRS})
        if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${SUBDIR})
            add_subdirectory(${SUBDIR})
        endif()
    endforeach()
endmacro()

# Call the macro
add_all_subdirectories()