add_library(CppStatecharts_example)
add_library(CppStatecharts::Example ALIAS CppStatecharts_example)

target_sources(CppStatecharts_example
    PRIVATE
        example_main.cpp
)

target_include_directories(CppStatecharts_example
    PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)
