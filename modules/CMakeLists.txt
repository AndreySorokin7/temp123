file(GLOB_RECURSE ALL_SOURCES_FILES *.cpp *.hpp)
add_library(calc_lib STATIC ${ALL_SOURCES_FILES})