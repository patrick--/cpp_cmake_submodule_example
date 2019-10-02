cmake_minimum_required(VERSION 3.1)

project(cpp_cmake_submodule_example)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
	websudoku.cpp
)

add_executable(websudoku_cpp ${SOURCES})

target_include_directories(websudoku_cpp
	PRIVATE
		${PROJECT_SOURCE_DIR}/external)
