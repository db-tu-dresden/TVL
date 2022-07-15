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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/static/simd/simd_type.hpp
 * \date 2022-07-15
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : 2f759bb (2f759bba5004ee2d2fcec3b410bca4c93de5cf19)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : 1e8135e (1e8135e36797c1a05bca927343985b30550ae4bf)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_STATIC_SIMD_SIMD_TYPE_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_STATIC_SIMD_SIMD_TYPE_HPP

#include "../utils/type_concepts.hpp"
#include "../utils/type_helper.hpp"
#include "simd_type_concepts.hpp"
#include <array>
namespace tvl {
   template<
      TVLArithmetic BaseType,
#ifdef TVL_USE_CONCEPTS
      TargetExtension<BaseType> TargetExtensionType,
#else
      class TargetExtensionType,
#endif
      std::size_t VectorSizeInBits = TargetExtensionType::template types<BaseType>::default_size_in_bits::value
   >
   struct simd {
      using base_type = BaseType;
      using target_extension = TargetExtensionType;

      using register_type = typename TargetExtensionType::template types<BaseType, VectorSizeInBits>::register_t;
      using mask_type = typename TargetExtensionType::template types<BaseType, VectorSizeInBits>::mask_t;

      using offset_register_type = typename TargetExtensionType::template types<offset_t, VectorSizeInBits>::register_t[sizeof(offset_t)/sizeof(BaseType)];

      static inline constexpr bool register_type_is_pointer_v = std::is_pointer_v<register_type>;

      static constexpr /*should be consteval, but clang does not eat this */ std::size_t vector_size_b() {
         return VectorSizeInBits;
      }
      static constexpr std::size_t vector_size_B() {
         return vector_element_count() * sizeof( base_type );
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
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_STATIC_SIMD_SIMD_TYPE_HPP