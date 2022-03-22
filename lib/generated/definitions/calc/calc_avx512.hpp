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
 * @file /home/runner/work/TVLPrimitiveData/TVLPrimitiveData/lib/generated/definitions/calc/calc_avx512.hpp
 * @date 22.03.2022
 * @brief Arithmetic primitives. Implementation for avx512
 */
#ifndef TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DEFINITIONS_CALC_CALC_AVX512_HPP
#define TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DEFINITIONS_CALC_CALC_AVX512_HPP

#include "../../declarations/calc.hpp"

namespace tvl {
   namespace details {
      template<  ImplementationDegreeOfFreedom Idof >
      struct add_impl< simd< uint64_t, avx512 >, Idof > {
         using Vec = simd< uint64_t, avx512  >;
         static constexpr bool native_supported() {
            return false;
         }
   /*
    * @brief Adds two vector registers.
    * @details todo.
    * @param vec_a First vector.
    * @param vec_b Second vector.
    * @return Vector containing result of the addition.
    */
         [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
         TVL_FORCE_INLINE static typename Vec::register_type apply(
            typename Vec::register_type  vec_a, 
            typename Vec::register_type  vec_b
         ) {
            static_assert( !std::is_same_v< Idof, native >, "The primitive add is not supported by your hardware natively while it is forced by using native" );
            
            return _mm512_add_epi64(vec_a, vec_b);
         }
      };
   } // end of namespace details for template specialization of add_impl for avx512 using uint64_t.
   
   namespace details {
      template<  ImplementationDegreeOfFreedom Idof >
      struct add_impl< simd< uint32_t, avx512 >, Idof > {
         using Vec = simd< uint32_t, avx512  >;
         static constexpr bool native_supported() {
            return true;
         }
   /*
    * @brief Adds two vector registers.
    * @details todo.
    * @param vec_a First vector.
    * @param vec_b Second vector.
    * @return Vector containing result of the addition.
    */
         [[nodiscard]] 
         TVL_FORCE_INLINE static typename Vec::register_type apply(
            typename Vec::register_type  vec_a, 
            typename Vec::register_type  vec_b
         ) {
            return _mm512_add_epi32(vec_a, vec_b);
         }
      };
   } // end of namespace details for template specialization of add_impl for avx512 using uint32_t.
   
} // end of namespace tvl

#endif //TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DEFINITIONS_CALC_CALC_AVX512_HPP