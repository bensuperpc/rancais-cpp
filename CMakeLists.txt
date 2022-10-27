cmake_minimum_required(VERSION 3.14)

include(cmake/prelude.cmake)

project(
    rancais-cpp
    VERSION 0.1.0
    DESCRIPTION "rancais-cpp"
    HOMEPAGE_URL "https://example.com/"
    LANGUAGES NONE
)

include(cmake/project-is-top-level.cmake)
include(cmake/variables.cmake)

# ---- Declare library ----

add_library(rancais-cpp_rancais-cpp INTERFACE)
add_library(rancais-cpp::rancais-cpp ALIAS rancais-cpp_rancais-cpp)

set_property(
    TARGET rancais-cpp_rancais-cpp PROPERTY
    EXPORT_NAME rancais-cpp
)

target_include_directories(
    rancais-cpp_rancais-cpp ${warning_guard}
    INTERFACE
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>"
)

target_compile_features(rancais-cpp_rancais-cpp INTERFACE cxx_std_20)

# ---- Install rules ----

if(NOT CMAKE_SKIP_INSTALL_RULES)
  include(cmake/install-rules.cmake)
endif()

# ---- Examples ----

if(PROJECT_IS_TOP_LEVEL)
  option(BUILD_EXAMPLES "Build examples tree." "${rancais-cpp_DEVELOPER_MODE}")
  if(BUILD_EXAMPLES)
    add_subdirectory(example)
  endif()
endif()

# ---- Developer mode ----

if(NOT rancais-cpp_DEVELOPER_MODE)
  return()
elseif(NOT PROJECT_IS_TOP_LEVEL)
  message(
      AUTHOR_WARNING
      "Developer mode is intended for developers of rancais-cpp"
  )
endif()

include(cmake/dev-mode.cmake)
