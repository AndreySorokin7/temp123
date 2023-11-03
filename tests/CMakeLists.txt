set(name_exec "gtest_exec_exe")
add_executable (${name_exec} test.cpp)
target_link_libraries(${name_exec} calc_lib)
target_link_libraries(${name_exec} gtest gtest_main)