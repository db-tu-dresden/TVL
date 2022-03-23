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
 * @file /home/runner/work/TVLGen/TVLGen/lib/generated/extensions/simd/arm/neon.hpp
 * @date 23.03.2022
 */
#ifndef TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_GENERATED_EXTENSIONS_SIMD_ARM_NEON_HPP
#define TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_GENERATED_EXTENSIONS_SIMD_ARM_NEON_HPP

#include <arm_neon.h>

namespace tvl {
   struct neon {
      using default_size_in_bits = std::integral_constant< std::size_t, 128 >;
      template< Arithmetic BaseType, std::size_t VectorSizeInBits = default_size_in_bits::value >
      struct types {
         using register_t  =
            TVL_DEP_TYPE(
               (std::is_integral_v< BaseType >),
               int64x2_t,
               TVL_DEP_TYPE(
                  (sizeof( BaseType ) == 4),
                  float32x4_t,
                  float64x2_t
               )
            );
         using mask_t =
            uint64x2_t;
      };
   };
   
} // end of namespace tvl

#endif //TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_GENERATED_EXTENSIONS_SIMD_ARM_NEON_HPP