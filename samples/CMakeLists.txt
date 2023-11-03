set(name_exec "temp_exec_exe")
add_executable (${name_exec} main.cpp)
target_link_libraries(${name_exec} calc_lib)