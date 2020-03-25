add_executable(
  ${PROJECT_NAME}-tests
  test_storage.cpp
  test_stream.cpp)

target_link_libraries(
  ${PROJECT_NAME}-tests
  gtest_main
  ${PROJECT_NAME}-storage
  ${PROJECT_NAME}-stream)
