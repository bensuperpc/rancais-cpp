cmake_minimum_required(VERSION 3.14)

project(rancais-cppTests LANGUAGES CXX)

include(../cmake/project-is-top-level.cmake)
include(../cmake/folders.cmake)
include(../cmake/windows-set-path.cmake)

# ---- Dependencies ----

if(PROJECT_IS_TOP_LEVEL)
  find_package(rancais-cpp REQUIRED)
  enable_testing()
endif()

# ---- Tests ----

add_executable(rancais-cpp_test source/rancais-cpp_test.cpp)
target_link_libraries(rancais-cpp_test PRIVATE rancais-cpp::rancais-cpp)
target_compile_features(rancais-cpp_test PRIVATE cxx_std_20)

add_test(NAME rancais-cpp_test COMMAND rancais-cpp_test)

# ---- End-of-file commands ----

add_folders(Test)
