add_library(
    ${PROJECT_NAME}-storage
    STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/storage.c)

target_include_directories(
    ${PROJECT_NAME}-storage
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/)
