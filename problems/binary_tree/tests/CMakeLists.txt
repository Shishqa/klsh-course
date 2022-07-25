add_executable(test_tree test_tree.c)
target_link_libraries(test_tree binary_tree)
add_test(NAME test_tree COMMAND test_tree)
