add_executable(example_tests ExampleTests.cpp)

target_link_libraries(example_tests
    Example
    gtest
    gtest_main
    pthread
)

target_include_directories(example_tests PRIVATE ../)

include(GoogleTest)
gtest_discover_tests(example_tests)