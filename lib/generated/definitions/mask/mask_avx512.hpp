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
 * @file /home/runner/work/TVLGen/TVLGen/lib/generated/definitions/mask/mask_avx512.hpp
 * @date 23.03.2022
 * @brief Mask related primitives. Implementation for avx512
 */
#ifndef TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_GENERATED_DEFINITIONS_MASK_MASK_AVX512_HPP
#define TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_GENERATED_DEFINITIONS_MASK_MASK_AVX512_HPP

#include "../../declarations/mask.hpp"

namespace tvl {
   namespace details {
      template<  ImplementationDegreeOfFreedom Idof >
      struct to_integral_impl< simd< int64_t, avx512 >, Idof > {
         using Vec = simd< int64_t, avx512  >;
         static constexpr bool native_supported() {
            return true;
         }
   /*
    * @brief Forms an integral value from the most significant bits of every lane in a vector mask register.
    * @details todo.
    * @param vec_mask Vector mask register containing mask style data.
    * @return Integral value representing the vector mask register.
    */
         [[nodiscard]] 
         TVL_FORCE_INLINE static typename Vec::base_type apply(
            typename Vec::mask_type  vec_mask
         ) {
            return vec_mask; //mask is integral already.
         }
      };
   } // end of namespace details for template specialization of to_integral_impl for avx512 using int64_t.
   
   namespace details {
      template<  ImplementationDegreeOfFreedom Idof >
      struct get_msb_impl< simd< int64_t, avx512 >, Idof > {
         using Vec = simd< int64_t, avx512  >;
         static constexpr bool native_supported() {
            return true;
         }
   /*
    * @brief Retrieves the most significant bit of every element in a vector register and sets the corresponding bit in a base type.
    * @details todo.
    * @param vec Vector mask register containing mask style data.
    * @return Integral value representing the vector mask register.
    */
         [[nodiscard]] 
         TVL_FORCE_INLINE static typename Vec::base_type apply(
            typename Vec::register_type  vec
         ) {
            return _mm512_movepi64_mask( vec );
         }
      };
   } // end of namespace details for template specialization of get_msb_impl for avx512 using int64_t.
   
   namespace details {
      template<  ImplementationDegreeOfFreedom Idof >
      struct to_vector_impl< simd< int64_t, avx512 >, Idof > {
         using Vec = simd< int64_t, avx512  >;
         static constexpr bool native_supported() {
            return true;
         }
   /*
    * @brief Forms an vector register from an integral where all bits are set in a lane if the corresponding mask bit is set to 1.
    * @details todo.
    * @param mask Vector mask register containing mask style data.
    * @return Integral value representing the vector mask register.
    */
         [[nodiscard]] 
         TVL_FORCE_INLINE static typename Vec::register_type apply(
            typename Vec::mask_type  mask
         ) {
            return _mm512_maskz_set1_epi64( mask, -1 );
         }
      };
   } // end of namespace details for template specialization of to_vector_impl for avx512 using int64_t.
   
   namespace details {
      template<  ImplementationDegreeOfFreedom Idof >
      struct mask_reduce_impl< simd< int64_t, avx512 >, Idof > {
         using Vec = simd< int64_t, avx512  >;
         static constexpr bool native_supported() {
            return true;
         }
   /*
    * @brief Masks out every non relevant bit.
    * @details todo.
    * @param mask Integral value containing n (set) bits.
    * @return Integral value with only relevant bits set (or not).
    */
         [[nodiscard]] 
         TVL_FORCE_INLINE static typename Vec::base_type apply(
            typename Vec::base_type  mask
         ) {
            return mask & 0xFF; //mask is integral already.
         }
      };
   } // end of namespace details for template specialization of mask_reduce_impl for avx512 using int64_t.
   
} // end of namespace tvl

#endif //TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_GENERATED_DEFINITIONS_MASK_MASK_AVX512_HPP