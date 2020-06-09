set(SOURCES
        test.cpp)
add_executable(simple_test ${SOURCES})
target_link_libraries(simple_test PUBLIC gtest_main)
target_link_libraries(simple_test PUBLIC Reg)
set_property(TARGET simple_test PROPERTY FOLDER "tests/Easy_1_7")