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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/mask/mask_sse.hpp
 * \date 2022-08-22
 * \brief Mask related primitives.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : 33a0eb3 (33a0eb31c7a217c98ec419fc8513495dcb595d69)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : 1e8135e (1e8135e36797c1a05bca927343985b30550ae4bf)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_SSE_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_SSE_HPP

#include "../../declarations/mask.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::mask_type vec_mask
            ) {
               return _mm_movemask_pd( _mm_castsi128_pd( vec_mask ) );
            }
         };
   } // end of namespace functors for template specialization of to_integral for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "get_msb".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct get_msb<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type vec
            ) {
               return _mm_movemask_pd( _mm_castsi128_pd( vec ) );
            }
         };
   } // end of namespace functors for template specialization of get_msb for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::mask_type mask
            ) {
               return mask; //mask is a vector already.
            }
         };
   } // end of namespace functors for template specialization of to_vector for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_reduce".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_reduce<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::base_type mask
            ) {
               return mask & 0x3;
            }
         };
   } // end of namespace functors for template specialization of mask_reduce for sse using int64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_SSE_HPP