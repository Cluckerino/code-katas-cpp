# Add library source code here
list(APPEND LIB_SOURCES
    dih4.cpp col_vec.cpp
    hello_world.cpp
)

add_library(code_katas_cpp_lib ${LIB_SOURCES})
add_executable(code_katas_cpp main.cpp)
target_link_libraries(code_katas_cpp code_katas_cpp_lib)
