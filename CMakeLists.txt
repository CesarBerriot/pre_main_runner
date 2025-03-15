cmake_minimum_required(VERSION 3.30)
project(pre_main_runner CXX)

add_library(pre_main_runner INTERFACE)
target_include_directories(pre_main_runner INTERFACE include)

include(FetchContent)
FetchContent_Declare(
  setup_gtest
  GIT_REPOSITORY https://github.com/CesarBerriot/setup_gtest.git
  GIT_TAG 1.2.0
)
FetchContent_MakeAvailable(setup_gtest)

include(${setup_gtest_SOURCE_DIR}/setup_gtest.cmake)

if(${BUILD_TESTING})
  setup_gtest(pre_main_runner)
endif()