find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Inclue all tests to run here
list(APPEND TEST_SOURCES
    test_buddy_pair.cpp
    test_count_pos_sum_neg.cpp
    test_hello_world.cpp
    test_xbonacci.cpp
)
add_executable(code_katas_cpp_tests ${TEST_SOURCES} gtest_main)
target_link_libraries(code_katas_cpp_tests code_katas_cpp_lib ${GTEST_LIBRARIES} pthread)
