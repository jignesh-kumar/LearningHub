cmake_minimum_required(VERSION 3.30)
message(LL_INFO " Cmake Version : " ${CMAKE_VERSION})

project(LearningHub LANGUAGES CXX)

# Enable debugging information
set(CMAKE_BUILD_TYPE Debug)

# Function to process subdirectories recursively
function(add_all_subdirectories dir)
    file(GLOB subdirs RELATIVE ${dir} ${dir}/*)
    foreach(subdir ${subdirs})
        if(IS_DIRECTORY ${dir}/${subdir})
            # Check if this directory contains a CMakeLists.txt file
            if(EXISTS ${dir}/${subdir}/CMakeLists.txt)
                add_subdirectory(${dir}/${subdir})
            endif()
            # Call this function recursively for deeper subdirectories
            add_all_subdirectories(${dir}/${subdir})
        endif()
    endforeach()
endfunction()

# Call the function on the root directory
add_all_subdirectories(${CMAKE_CURRENT_SOURCE_DIR}/CPP)
