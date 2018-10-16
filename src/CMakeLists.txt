set(src_files Ant.cpp)
add_executable(${proj_name} ${src_files} main.cpp)
add_library(${proj_name}_lib ${src_files})
