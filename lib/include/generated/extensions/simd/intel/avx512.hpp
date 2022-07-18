/*==========================================================================*
 * This file is part of the TVL - a template SIMD library.                  *
 *                                                                          *
 * Copyright 2022 TVL-Team, Database Research Group TU Dresden              *
 *                                                                          *
 * Licensed under the Apache License, Version 2.0 (the "License");          *
 * you may not use this file except in compliance with the License.         *
 * You may obtain a copy of the License at                                  *
 *                                                                          *
 *     http://www.apache.org/licenses/LICENSE-2.0                           *
 *                                                                          *
 * Unless required by applicable law or agreed to in writing, software      *
 * distributed under the License is distributed on an "AS IS" BASIS,        *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 * See the License for the specific language governing permissions and      *
 * limitations under the License.                                           *
 *==========================================================================*/
/*
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/extensions/simd/intel/avx512.hpp
 * \date 2022-07-18
 * \brief Definition of the SIMD TargetExtension avx512.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : d245ef8 (d245ef8e8a48a9e67c8e31391323e827e26229eb)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : 1e8135e (1e8135e36797c1a05bca927343985b30550ae4bf)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_EXTENSIONS_SIMD_INTEL_AVX512_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_EXTENSIONS_SIMD_INTEL_AVX512_HPP

#include "immintrin.h"
namespace tvl {
   struct avx512 {
      template<TVLArithmetic BaseType, std::size_t VectorSizeInBits = 512>
         struct types {
            using default_size_in_bits = std::integral_constant<std::size_t, VectorSizeInBits>;
            using register_t __attribute__((__vector_size__(VectorSizeInBits/8),__may_alias__,__aligned__(VectorSizeInBits/8))) =
               TVL_DEP_TYPE(
                  (std::is_integral_v< BaseType >),
                  long long,
                  TVL_DEP_TYPE(
                     (sizeof( BaseType ) == 4),
                     float,
                     double
                  )
               );
            using mask_t =
               TVL_DEP_TYPE(
                  ( VectorSizeInBits == 512 ),
                  TVL_DEP_TYPE(
                     ( sizeof( register_t ) / sizeof( BaseType ) ) == 64,
                     __mmask64,
                     TVL_DEP_TYPE(
                        ( sizeof( register_t ) / sizeof( BaseType ) ) == 32,
                        __mmask32,
                        TVL_DEP_TYPE(
                           ( sizeof( register_t ) / sizeof( BaseType ) ) == 16,
                           __mmask16,
                           __mmask8
                        )
                     )
                  ),
                  TVL_DEP_TYPE(
                     ( VectorSizeInBits == 256 ),
                     TVL_DEP_TYPE(
                        ( sizeof( register_t ) / sizeof( BaseType ) ) == 32,
                        __mmask32,
                        TVL_DEP_TYPE(
                           ( sizeof( register_t ) / sizeof( BaseType ) ) == 16,
                           __mmask16,
                           __mmask8
                        )
                     ),
                     TVL_DEP_TYPE(
                        ( sizeof( register_t ) / sizeof( BaseType ) ) == 16,
                        __mmask16,
                        __mmask8
                     )
                  )
               );
            using imask_t =
               mask_t;
         };
   };
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_EXTENSIONS_SIMD_INTEL_AVX512_HPP