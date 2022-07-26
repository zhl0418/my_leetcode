add_executable (cpp-example main.cpp fraction.cpp)

add_library(example "")

target_sources(
    example
    PRIVATE
        fraction.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/fraction.h
    )

target_include_directories(
    example
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
