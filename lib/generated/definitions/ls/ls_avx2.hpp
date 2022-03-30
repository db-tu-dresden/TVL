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
 * @file lib/generated/definitions/ls/ls_avx2.hpp
 * @date 30.03.2022
 * @brief Load/Store primitives. Implementation for avx2
 */
#ifndef TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_LS_LS_AVX2_HPP
#define TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_LS_LS_AVX2_HPP

#include "../../declarations/ls.hpp"
namespace tvl {
   namespace details {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_impl<simd<int64_t, avx2>, Idof> {
            using Vec = simd< int64_t, avx2  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm256_load_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
         };
   } // end of namespace details for template specialization of load_impl for avx2 using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu_impl<simd<int64_t, avx2>, Idof> {
            using Vec = simd< int64_t, avx2  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
         };
   } // end of namespace details for template specialization of loadu_impl for avx2 using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1_impl<simd<int64_t, avx2>, Idof> {
            using Vec = simd< int64_t, avx2  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type  value
            ) {
               return _mm256_set1_epi64x( value );
            }
         };
   } // end of namespace details for template specialization of set1_impl for avx2 using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['AVX2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather_impl<simd<int64_t, avx2>, Idof> {
            using Vec = simd< int64_t, avx2  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  source, typename Vec::base_type const *  memory, typename Vec::register_type  index, typename Vec::mask_type  mask
            ) {
               return _mm256_mask_i64gather_epi64( source, reinterpret_cast< long long int const * >( memory ), index, mask, 8 );
            }
         };
   } // end of namespace details for template specialization of gather_impl for avx2 using int64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_LS_LS_AVX2_HPP