file(GLOB_RECURSE SCRABBLE_SRC
        "${SRC_DIR}/*.hpp"
        "${SRC_DIR}/*.cpp"
        )

add_executable(${SOURCE} ${SCRABBLE_SRC})
target_include_directories(${SOURCE} PRIVATE ${SRC_DIR})