cmake_minimum_required(VERSION 3.14)

include(cmake/prelude.cmake)

project(
    rancais_cpp
    VERSION 0.1.0
    DESCRIPTION "rancais_cpp"
    HOMEPAGE_URL "https://example.com/"
    LANGUAGES NONE
)

include(cmake/project-is-top-level.cmake)
include(cmake/variables.cmake)

# ---- Declare library ----

add_library(rancais_cpp_rancais_cpp INTERFACE)
add_library(rancais_cpp::rancais_cpp ALIAS rancais_cpp_rancais_cpp)

set_property(
    TARGET rancais_cpp_rancais_cpp PROPERTY
    EXPORT_NAME rancais_cpp
)

target_include_directories(
    rancais_cpp_rancais_cpp ${warning_guard}
    INTERFACE
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>"
)

target_compile_features(rancais_cpp_rancais_cpp INTERFACE cxx_std_20)

# ---- Install rules ----

if(NOT CMAKE_SKIP_INSTALL_RULES)
  include(cmake/install-rules.cmake)
endif()

# ---- Examples ----

if(PROJECT_IS_TOP_LEVEL)
  option(BUILD_EXAMPLES "Build examples tree." "${rancais_cpp_DEVELOPER_MODE}")
  if(BUILD_EXAMPLES)
    add_subdirectory(example)
  endif()
endif()

# ---- Developer mode ----

if(NOT rancais_cpp_DEVELOPER_MODE)
  return()
elseif(NOT PROJECT_IS_TOP_LEVEL)
  message(
      AUTHOR_WARNING
      "Developer mode is intended for developers of rancais_cpp"
  )
endif()

include(cmake/dev-mode.cmake)
