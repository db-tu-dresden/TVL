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
 * @file /home/runner/work/TVLPrimitiveData/TVLPrimitiveData/lib/static/simd/simd_type.hpp
 * @date 22.03.2022
 * @brief TODO.
 */
#ifndef TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_STATIC_SIMD_SIMD_TYPE_HPP
#define TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_STATIC_SIMD_SIMD_TYPE_HPP

#include "../utils/type_concepts.hpp"
#include "../utils/type_helper.hpp"
#include "simd_type_concepts.hpp"

namespace tvl {
   template<
      Arithmetic BaseType,
      TargetExtension< BaseType > TargetExtensionType,
      std::size_t VectorSizeInBits = TargetExtensionType::default_size_in_bits::value
   >
   struct simd {
      using base_type = BaseType;
      using target_extension = TargetExtensionType;

      using register_type = typename TargetExtensionType::template types< BaseType, VectorSizeInBits >::register_t;
      using mask_type = typename TargetExtensionType::template types< BaseType, VectorSizeInBits >::mask_t;

      static constexpr /*should be consteval, but clang does not eat this */ std::size_t vector_size_b() {
         return VectorSizeInBits;
      }
      static constexpr std::size_t vector_size_B() {
         return sizeof( register_type );
      }
      static constexpr std::size_t vector_element_count() {
         return VectorSizeInBits / ( sizeof( base_type ) * 8 );
      }
      static constexpr std::size_t vector_alignment() {
         if constexpr( vector_size_B() > 32 ) {
            return 64;
         } else {
            return vector_size_B();
         }
      }
      static constexpr std::size_t vector_mask_ratio() {
         return ( sizeof( mask_type ) * 8 ) / vector_element_count();
      }
      static constexpr std::size_t mask_shift() {
         return vector_element_count();
      }
   };

   
} // end of namespace tvl

#endif //TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_STATIC_SIMD_SIMD_TYPE_HPP