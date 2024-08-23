cmake_minimum_required(VERSION 3.15)

project(cmake_gitsub VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# primary build target
add_library(${PROJECT_NAME} STATIC "cookie.cpp")

# one-tinme test config
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory("googletest/" EXCLUDE_FROM_ALL)
enable_testing()

# test hook
function(add_gtest test_name test_source)
	add_executable(${test_name} ${test_source})
	target_include_directories(${test_name} PUBLIC ${CMAKE_SOURCE_DIR}) 
	target_link_libraries(${test_name} gtest gtest_main)
	add_test(NAME ${test_name} COMMAND ${test_name})
endfunction()

# test modules
add_gtest(test_addition "tests/test_addition.cpp")

