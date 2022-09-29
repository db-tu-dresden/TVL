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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/compare/compare_sse.hpp
 * \date 2022-09-29
 * \brief Compare primitives.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : dced20e (dced20e02fd365f0df93721f53d70e87bfe5cab2)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : be13979 (be139799c677e3ddb66ae930c197c81312c29456)
 *
 */

#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_SSE_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_SSE_HPP

#include "../../declarations/compare.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm_cmpeq_epi8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for sse using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm_cmpeq_epi8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for sse using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm_cmpeq_epi16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for sse using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm_cmpeq_epi16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for sse using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm_cmpeq_epi32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for sse using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm_cmpeq_epi32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for sse using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse4_1']
       * @note: Signed comparison.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm_cmpeq_epi64(vec_a,vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse4_1']
       * @note: Signed comparison.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm_cmpeq_epi64(vec_a,vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for sse using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "between_inclusive".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2', 'sse4_2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct between_inclusive<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::register_type vec_data, typename Vec::register_type vec_min, typename Vec::register_type vec_max
            ) {
               return _mm_andnot_si128( _mm_cmpgt_epi64( vec_min, vec_data ), _mm_andnot_si128( _mm_cmpgt_epi64( vec_data, vec_max ), _mm_set1_epi64x(-1)));
            }
         };
   } // end of namespace functors for template specialization of between_inclusive for sse using int64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_SSE_HPP