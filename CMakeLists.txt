cmake_minimum_required(VERSION 3.25)



option(gtest_force_shared_crt "" TRUE)


set(currect_project "temp_exec")
project (${currect_project})
add_subdirectory (3rdparty/googletest)
include_directories(modules)
add_subdirectory (samples)
add_subdirectory (modules)
add_subdirectory (tests)
