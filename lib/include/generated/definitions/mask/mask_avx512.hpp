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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/mask/mask_avx512.hpp
 * \date 2022-07-15
 * \brief Mask related primitives.
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
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_AVX512_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_AVX512_HPP

#include "../../declarations/mask.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::mask_type vec_mask
            ) {
               return vec_mask; //mask is integral already.
            }
         };
   } // end of namespace functors for template specialization of to_integral for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "get_msb".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f', 'avx512dq']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct get_msb<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type vec
            ) {
               return _mm512_movepi64_mask( vec );
            }
         };
   } // end of namespace functors for template specialization of get_msb for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::mask_type mask
            ) {
               return _mm512_maskz_set1_epi64( mask, -1 );
            }
         };
   } // end of namespace functors for template specialization of to_vector for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_reduce".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_reduce<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::base_type mask
            ) {
               return mask & 0xFF; //mask is integral already.
            }
         };
   } // end of namespace functors for template specialization of mask_reduce for avx512 using int64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_AVX512_HPP