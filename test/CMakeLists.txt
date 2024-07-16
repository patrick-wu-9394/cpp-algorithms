cmake_minimum_required(VERSION 3.17)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_Shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


include_directories(../)

add_executable(
    reverse_test
    reverse_test.cc
)

target_link_libraries(
    reverse_test
    GTest::gtest_main
)

add_executable(
    sorting_test
    sorting_test.cc
)

target_link_libraries(
    sorting_test
    GTest::gtest_main
)

add_executable(
    misc_test
    misc_test.cc
)

target_link_libraries(
    misc_test
    GTest::gtest_main
)



include(GoogleTest)
gtest_discover_tests(reverse_test)
gtest_discover_tests(sorting_test)
gtest_discover_tests(misc_test)