cmake_minimum_required(VERSION 3.13)
set(CMAKE_VERBOSE_MAKEFILE ON)
add_library(tvl INTERFACE)
#set_target_properties(tvl PROPERTIES CXX_STANDARD 20)
target_compile_features(tvl INTERFACE cxx_std_20)

target_sources(tvl
   INTERFACE include/tvlintrin.hpp
   INTERFACE include/static/tvl_static.hpp
   INTERFACE include/static/simd/simd_primitive_concepts.hpp
   INTERFACE include/static/simd/simd_type.hpp
   INTERFACE include/static/simd/simd_type_concepts.hpp
   INTERFACE include/static/utils/type_concepts.hpp
   INTERFACE include/static/utils/type_helper.hpp
   INTERFACE include/static/utils/preprocessor.hpp
   INTERFACE include/generated/tvl_generated.hpp
   INTERFACE include/generated/extensions/simd/intel/avx2.hpp
   INTERFACE include/generated/extensions/simt/cuda.hpp
   INTERFACE include/generated/extensions/simd/intel/avx512.hpp
   INTERFACE include/generated/extensions/scalar.hpp
   INTERFACE include/generated/extensions/simd/intel/sse.hpp
   INTERFACE include/generated/extensions/simd/arm/neon.hpp
   INTERFACE include/generated/declarations/io.hpp
   INTERFACE include/generated/declarations/ls.hpp
   INTERFACE include/generated/declarations/binary.hpp
   INTERFACE include/generated/declarations/compare.hpp
   INTERFACE include/generated/declarations/calc.hpp
   INTERFACE include/generated/declarations/mask.hpp
   INTERFACE include/generated/declarations/memory.hpp
   INTERFACE include/generated/definitions/io/io_avx512.hpp
   INTERFACE include/generated/definitions/io/io_avx2.hpp
   INTERFACE include/generated/definitions/io/io_sse.hpp
   INTERFACE include/generated/definitions/io/io_neon.hpp
   INTERFACE include/generated/definitions/ls/ls_avx512.hpp
   INTERFACE include/generated/definitions/ls/ls_avx2.hpp
   INTERFACE include/generated/definitions/ls/ls_sse.hpp
   INTERFACE include/generated/definitions/ls/ls_neon.hpp
   INTERFACE include/generated/definitions/ls/ls_scalar.hpp
   INTERFACE include/generated/definitions/binary/binary_avx512.hpp
   INTERFACE include/generated/definitions/binary/binary_avx2.hpp
   INTERFACE include/generated/definitions/binary/binary_sse.hpp
   INTERFACE include/generated/definitions/binary/binary_neon.hpp
   INTERFACE include/generated/definitions/binary/binary_scalar.hpp
   INTERFACE include/generated/definitions/compare/compare_avx512.hpp
   INTERFACE include/generated/definitions/compare/compare_avx2.hpp
   INTERFACE include/generated/definitions/compare/compare_sse.hpp
   INTERFACE include/generated/definitions/compare/compare_neon.hpp
   INTERFACE include/generated/definitions/compare/compare_scalar.hpp
   INTERFACE include/generated/definitions/calc/calc_cuda.hpp
   INTERFACE include/generated/definitions/calc/calc_avx512.hpp
   INTERFACE include/generated/definitions/calc/calc_avx2.hpp
   INTERFACE include/generated/definitions/calc/calc_sse.hpp
   INTERFACE include/generated/definitions/calc/calc_neon.hpp
   INTERFACE include/generated/definitions/calc/calc_scalar.hpp
   INTERFACE include/generated/definitions/mask/mask_avx512.hpp
   INTERFACE include/generated/definitions/mask/mask_avx2.hpp
   INTERFACE include/generated/definitions/mask/mask_sse.hpp
   INTERFACE include/generated/definitions/mask/mask_neon.hpp
   INTERFACE include/generated/definitions/memory/memory_avx512.hpp
   INTERFACE include/generated/definitions/memory/memory_avx2.hpp
   INTERFACE include/generated/definitions/memory/memory_sse.hpp
   INTERFACE include/generated/definitions/memory/memory_scalar.hpp
)
target_include_directories(tvl INTERFACE include/)
target_compile_options(tvl INTERFACE -mavx -mneon -mavx2 -msse4.2 -msse -msse3 -msse2 -mavx512dq -mssse3 -msse4.1 -mavx512vl -mavx512f -mavx512bw -Wno-ignored-attributes -Wdeprecated-declarations)
target_compile_definitions(tvl INTERFACE TVL_USE_CONCEPTS)
add_subdirectory(src/test)
