project (coroutines)
 
set (PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set (PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
 
file(GLOB SRC_FILES_CPP ${PROJECT_SOURCE_DIR}/*.cpp)
set(EXECUTABLE_OUTPUT_PATH ${EXECUTABLE_OUTPUT_PATH}/${PROJECT_NAME})

add_executable(${PROJECT_NAME} ${SRC_FILES_CPP})
include_directories("${PROJECT_INCLUDE_DIR}")
add_definitions(-fcoroutines)