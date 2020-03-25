add_subdirectory(storage)
add_subdirectory(stream)

add_executable(
  ${PROJECT_NAME}-app
  main.c)

target_link_libraries(
  ${PROJECT_NAME}-app
  ${PROJECT_NAME}-storage
  ${PROJECT_NAME}-stream)
