find_package (GTest REQUIRED)
add_executable (runTests AntTest.cpp)
target_include_directories (runTests PUBLIC ${GTEST_INCLUDE_DIRS})
target_link_libraries (runTests ${GTEST_LIBRARIES} gtest_main ${proj_name}_lib pthread)
add_test(runTests runTests)
