add_executable(
    unit_test
    test.cpp
    )

target_link_libraries(
    unit_test
    gtest_main
    example
    )

add_test(
  NAME
    unit
  COMMAND
    ${CMAKE_BINARY_DIR}/test/unit_test
  )
