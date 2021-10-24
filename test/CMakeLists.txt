include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB_RECURSE SCRABBLE_TEST_SRC
        "${TEST_DIR}/*.hpp"
        "${TEST_DIR}/*.cpp"
        "${SRC_DIR}/*.hpp"
        "${SRC_DIR}/*.cpp"
        )

add_executable(${TEST} ${SCRABBLE_TEST_SRC})
target_link_libraries(${TEST} gtest gtest_main)
target_include_directories(${TEST} PRIVATE ${TEST_DIR})

enable_testing()
add_test(${TEST} ${TEST})