cmake_minimum_required(VERSION 3.16)
project(encryptorator)

# enable ccache
find_program(CCACHE_PROGRAM ccache)
if (CCACHE_PROGRAM)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
endif ()

set(CMAKE_CXX_STANDARD 20)

add_library(${PROJECT_NAME} STATIC
        include/encryptorator.hpp
        src/encryptorator.cpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED ON
        POSITION_INDEPENDENT_CODE ON
)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)

add_executable(${PROJECT_NAME}_test test/test.cpp)
target_link_libraries(${PROJECT_NAME}_test ${PROJECT_NAME})

set_target_properties(${PROJECT_NAME}_test PROPERTIES
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED ON
)
