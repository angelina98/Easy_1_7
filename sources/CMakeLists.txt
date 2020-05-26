set(SOURCES
        Reg.h
        Reg.cpp)
add_library(Reg ${SOURCES})
target_include_directories(Reg PUBLIC ${SRC_ROOT_DIR})
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})
add_subdirectory(tests)