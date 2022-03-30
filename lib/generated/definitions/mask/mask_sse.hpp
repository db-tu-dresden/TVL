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
 * @file lib/generated/definitions/mask/mask_sse.hpp
 * @date 30.03.2022
 * @brief Mask related primitives. Implementation for sse
 */
#ifndef TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_MASK_MASK_SSE_HPP
#define TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_MASK_MASK_SSE_HPP

#include "../../declarations/mask.hpp"
namespace tvl {
   namespace details {
      /**
       * @brief: Template specialization of implementation for "to_integral".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral_impl<simd<int64_t, sse>, Idof> {
            using Vec = simd< int64_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::mask_type  vec_mask
            ) {
               return _mm_movemask_pd( _mm_castsi128_pd( vec_mask ) );
            }
         };
   } // end of namespace details for template specialization of to_integral_impl for sse using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "get_msb".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct get_msb_impl<simd<int64_t, sse>, Idof> {
            using Vec = simd< int64_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type  vec
            ) {
               return _mm_movemask_pd( _mm_castsi128_pd( vec ) );
            }
         };
   } // end of namespace details for template specialization of get_msb_impl for sse using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "to_vector".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector_impl<simd<int64_t, sse>, Idof> {
            using Vec = simd< int64_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::mask_type  mask
            ) {
               return mask; //mask is a vector already.
            }
         };
   } // end of namespace details for template specialization of to_vector_impl for sse using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "mask_reduce".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_reduce_impl<simd<int64_t, sse>, Idof> {
            using Vec = simd< int64_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::base_type  mask
            ) {
               return mask & 0x3;
            }
         };
   } // end of namespace details for template specialization of mask_reduce_impl for sse using int64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_MASK_MASK_SSE_HPP