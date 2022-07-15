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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/extensions/simd/arm/neon.hpp
 * \date 2022-07-15
 * \brief Definition of the SIMD TargetExtension neon.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : fcfbe18 (fcfbe18f11282e1c45aac61384b956ec0542f43b)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : 1e8135e (1e8135e36797c1a05bca927343985b30550ae4bf)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_EXTENSIONS_SIMD_ARM_NEON_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_EXTENSIONS_SIMD_ARM_NEON_HPP

#include <arm_neon.h>
namespace tvl {
   struct neon {
      template<TVLArithmetic BaseType, std::size_t VectorSizeInBits = 128>
         struct types {
            using default_size_in_bits = std::integral_constant<std::size_t, VectorSizeInBits>;
            using register_t  =
               TVL_DEP_TYPE(
                  std::is_integral_v< BaseType >,
                  TVL_DEP_TYPE( 
                     std::is_unsigned_v< BaseType >,
                     TVL_DEP_TYPE(
                        (sizeof( BaseType ) == 1),
                        uint8x16_t,
                        TVL_DEP_TYPE(
                           (sizeof( BaseType ) == 2),
                           uint16x8_t,
                           TVL_DEP_TYPE(
                              (sizeof( BaseType ) == 4),
                              uint32x4_t,
                              uint64x2_t
                           )
                        )
                     ),
                     TVL_DEP_TYPE(
                        (sizeof( BaseType ) == 1),
                        int8x16_t,
                        TVL_DEP_TYPE(
                           (sizeof( BaseType ) == 2),
                           int16x8_t,
                           TVL_DEP_TYPE(
                              (sizeof( BaseType ) == 4),
                              int32x4_t,
                              int64x2_t
                           )
                        )
                     )
                  ),
                  TVL_DEP_TYPE(
                     (sizeof( BaseType ) == 4),
                     float32x4_t,
                     float64x2_t
                  )
               );
            using mask_t =
               TVL_DEP_TYPE(
                  (sizeof( BaseType ) == 1),
                  uint8x16_t,
                  TVL_DEP_TYPE(
                     (sizeof( BaseType ) == 2),
                     uint16x8_t,
                     TVL_DEP_TYPE(
                        (sizeof( BaseType ) == 4),
                        uint32x4_t,
                        uint64x2_t
                     )
                  )
               );
         };
   };
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_EXTENSIONS_SIMD_ARM_NEON_HPP