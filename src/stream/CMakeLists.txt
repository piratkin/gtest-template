add_library(
    ${PROJECT_NAME}-stream
    STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/stream.c
)

target_include_directories(
    ${PROJECT_NAME}-stream
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/
)
