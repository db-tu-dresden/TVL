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
 * @file /home/runner/work/TVLPrimitiveData/TVLPrimitiveData/lib/generated/definitions/ls/ls_avx512.hpp
 * @date 22.03.2022
 * @brief Load/Store primitives. Implementation for avx512
 */
#ifndef TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DEFINITIONS_LS_LS_AVX512_HPP
#define TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DEFINITIONS_LS_LS_AVX512_HPP

#include "../../declarations/ls.hpp"

namespace tvl {
   namespace details {
      template< typename T,  ImplementationDegreeOfFreedom Idof >
      struct load_impl< simd< T, avx512 >, Idof > {
         using Vec = simd< T, avx512  >;
         static constexpr bool native_supported() {
            return true;
         }
   /*
    * @brief Loads data from aligned memory into a vector register.
    * @details todo.
    * @param memory Aligned memory which should be transferred into a vector register.
    * @return Vector containing the loaded data.
    */
         [[nodiscard]] 
         TVL_FORCE_INLINE static typename Vec::register_type apply(
            typename Vec::base_type const *  memory
         ) {
            return _mm512_load_si512( reinterpret_cast< void const * >( memory ) );
         }
      };
   } // end of namespace details for template specialization of load_impl for avx512 using T.
   
   namespace details {
      template<  ImplementationDegreeOfFreedom Idof >
      struct loadu_impl< simd< int64_t, avx512 >, Idof > {
         using Vec = simd< int64_t, avx512  >;
         static constexpr bool native_supported() {
            return true;
         }
   /*
    * @brief Loads data from (un)aligned memory into a vector register.
    * @details todo.
    * @param memory (Un)aligned memory which should be transferred into a vector register.
    * @return Vector containing the loaded data.
    */
         [[nodiscard]] 
         TVL_FORCE_INLINE static typename Vec::register_type apply(
            typename Vec::base_type const *  memory
         ) {
            return _mm512_loadu_si512( reinterpret_cast< void const * >( memory ) );
         }
      };
   } // end of namespace details for template specialization of loadu_impl for avx512 using int64_t.
   
   namespace details {
      template<  ImplementationDegreeOfFreedom Idof >
      struct set1_impl< simd< int64_t, avx512 >, Idof > {
         using Vec = simd< int64_t, avx512  >;
         static constexpr bool native_supported() {
            return true;
         }
   /*
    * @brief Broadcasts a single value into all lanes of a vector register.
    * @details todo.
    * @param value Value which should be broadcasted.
    * @return Vector containing the same value in all lanes.
    */
         [[nodiscard]] 
         TVL_FORCE_INLINE static typename Vec::register_type apply(
            typename Vec::base_type  value
         ) {
            return _mm512_set1_epi64( value );
         }
      };
   } // end of namespace details for template specialization of set1_impl for avx512 using int64_t.
   
   namespace details {
      template<  ImplementationDegreeOfFreedom Idof >
      struct gather_impl< simd< int64_t, avx512 >, Idof > {
         using Vec = simd< int64_t, avx512  >;
         static constexpr bool native_supported() {
            return true;
         }
   /*
    * @brief Transfers data from arbitrary locations into a vector register.
    * @details todo.
    * @param source Vector register containing values which should be preserved depending on the mask (if mask[i] == 0).
    * @param memory (Start)pointer of the memory (which is used as base for address calculation).
    * @param index Offsets (in base_type granularity) relative to the start pointer.
    * @param mask Mask indicating which lanes should be gathered.
    * @return Vector containing gathered data.
    */
         [[nodiscard]] 
         TVL_FORCE_INLINE static typename Vec::register_type apply(
            typename Vec::register_type  source, 
            typename Vec::base_type const *  memory, 
            typename Vec::register_type  index, 
            typename Vec::mask_type  mask
         ) {
            return _mm512_mask_i64gather_epi64( source, mask, index, reinterpret_cast< void const * >( memory ), 8 );
         }
      };
   } // end of namespace details for template specialization of gather_impl for avx512 using int64_t.
   
} // end of namespace tvl

#endif //TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DEFINITIONS_LS_LS_AVX512_HPP