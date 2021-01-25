cmake_minimum_required(VERSION 3.12)
project("Catch2_bench")

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE catch2_bench.cpp)

target_compile_options(
  ${PROJECT_NAME}
  PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:/DCATCH_CONFIG_ENABLE_BENCHMARKING>
    $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>>:-DCATCH_CONFIG_ENABLE_BENCHMARKING>
)
