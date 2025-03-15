```cmake
include(FetchContent)

FetchContent_Declare(
  pre_main_runner
  GIT_REPOSITORY https://github.com/CesarBerriot/pre_main_runner.git
  GIT_TAG 1.0.0
)

FetchContent_MakeAvailable(pre_main_runner)

target_link_libraries(PROJECT_NAME PRIVATE pre_main_runner)
```