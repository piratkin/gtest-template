# Description

Project template for testing SI code through the Google Test Framework.
This testing tool seems convenient to me, the code itself is written for embedded, low-performance devices

# Usage

## Structure

  *docs* - directory for storing documentation

  *build* - build directory

  *src* - directory with source codes

  *tests* - directory with tests

  *cmake* - directory with custom build scripts

  *external* - third-party code

  *include* - common header files for the entire project

  *CMakeLists.txt* - project build script

  *CMakeLists.txt.in* - Google Test Framework Settings

  *README.md* - this is the description

> This structure is probably not final and will undergo changes in the future.

## Launch

```bash
# git clone https://github.com/piratkin/gtest-template.git
# cd gtest-template/build
# cmake .. && make && tests/module-tests --gtest_color=yes
```

## Requirements

- Cmake preferably version no lower than 2.8
- build-essential (C++11 and higher)
 
> Unfortunately, I have no way to check all the requirements.
