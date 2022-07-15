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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/compare/compare_avx512.hpp
 * \date 2022-07-15
 * \brief Compare primitives.
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
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_AVX512_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_AVX512_HPP

#include "../../declarations/compare.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512bw']
       * @note: Signed comparison.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_cmpeq_epi8_mask(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512bw']
       * @note: Signed comparison.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_cmpeq_epi8_mask(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512bw']
       * @note: Signed comparison.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_cmpeq_epi16_mask(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512bw']
       * @note: Signed comparison.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_cmpeq_epi16_mask(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       * @note: Signed comparison.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_cmpeq_epi32_mask(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       * @note: Signed comparison.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_cmpeq_epi32_mask(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       * @note: Signed comparison.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_cmpeq_epi64_mask(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       * @note: Signed comparison.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_cmpeq_epi64_mask(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_cmpeq_ps_mask(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_cmpeq_pd_mask(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "between_inclusive".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct between_inclusive<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_data, typename Vec::register_type vec_min, typename Vec::register_type vec_max
            ) {
               return _mm512_cmple_epu64_mask( vec_min, vec_data ) & _mm512_cmpge_epu64_mask( vec_max, vec_data );
            }
         };
   } // end of namespace functors for template specialization of between_inclusive for avx512 using int64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_AVX512_HPP