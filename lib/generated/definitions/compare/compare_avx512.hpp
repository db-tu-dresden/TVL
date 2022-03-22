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
 * @file /home/runner/work/TVLPrimitiveData/TVLPrimitiveData/lib/generated/definitions/compare/compare_avx512.hpp
 * @date 22.03.2022
 * @brief Compare primitives. Implementation for avx512
 */
#ifndef TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DEFINITIONS_COMPARE_COMPARE_AVX512_HPP
#define TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DEFINITIONS_COMPARE_COMPARE_AVX512_HPP

#include "../../declarations/compare.hpp"

namespace tvl {
   namespace details {
      template<  ImplementationDegreeOfFreedom Idof >
      struct equal_impl< simd< int64_t, avx512 >, Idof > {
         using Vec = simd< int64_t, avx512  >;
         static constexpr bool native_supported() {
            return true;
         }
   /*
    * @brief Compares two vector registers for equality.
    * @details todo.
    * @param vec_a Left vector.
    * @param vec_b Right vector.
    * @return Vector mask type indicating whether vec_a[*]==vec_b[*].
    */
         [[nodiscard]] 
         TVL_FORCE_INLINE static typename Vec::mask_type apply(
            typename Vec::register_type  vec_a, 
            typename Vec::register_type  vec_b
         ) {
            return _mm512_cmpeq_epi64_mask( vec_a, vec_b );
         }
      };
   } // end of namespace details for template specialization of equal_impl for avx512 using int64_t.
   
   namespace details {
      template<  ImplementationDegreeOfFreedom Idof >
      struct between_inclusive_impl< simd< int64_t, avx512 >, Idof > {
         using Vec = simd< int64_t, avx512  >;
         static constexpr bool native_supported() {
            return true;
         }
   /*
    * @brief Checks if the values of a vector are in a specific range (min[*] <= d[*] <= max[*]).
    * @details todo.
    * @param vec_data Data vector.
    * @param vec_min Minimum vector.
    * @param vec_max Maximum vector.
    * @return Vector mask type indicating whether the data is in the given range.
    */
         [[nodiscard]] 
         TVL_FORCE_INLINE static typename Vec::mask_type apply(
            typename Vec::register_type  vec_data, 
            typename Vec::register_type  vec_min, 
            typename Vec::register_type  vec_max
         ) {
            return _mm512_cmple_epu64_mask( vec_min, vec_data ) & _mm512_cmpge_epu64_mask( vec_max, vec_data );
         }
      };
   } // end of namespace details for template specialization of between_inclusive_impl for avx512 using int64_t.
   
} // end of namespace tvl

#endif //TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DEFINITIONS_COMPARE_COMPARE_AVX512_HPP