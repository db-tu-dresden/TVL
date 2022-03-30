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
 * @file lib/generated/definitions/calc/calc_scalar.hpp
 * @date 30.03.2022
 * @brief Arithmetic primitives. Implementation for scalar
 */
#ifndef TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_CALC_CALC_SCALAR_HPP
#define TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_CALC_CALC_SCALAR_HPP

#include "../../declarations/calc.hpp"
namespace tvl {
   namespace details {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: scalar.
       *        Data Type: T
       *  Extension Flags: []
       */
      template<typename T, ImplementationDegreeOfFreedom Idof>
         struct add_impl<simd<T, scalar>, Idof> {
            using Vec = simd< T, scalar  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vec_a + vec_b;
            }
         };
   } // end of namespace details for template specialization of add_impl for scalar using T.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: scalar.
       *        Data Type: T
       *  Extension Flags: []
       */
      template<typename T, ImplementationDegreeOfFreedom Idof>
         struct mul_impl<simd<T, scalar>, Idof> {
            using Vec = simd< T, scalar  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vec_a * vec_b;
            }
         };
   } // end of namespace details for template specialization of mul_impl for scalar using T.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: scalar.
       *        Data Type: T
       *  Extension Flags: []
       */
      template<typename T, ImplementationDegreeOfFreedom Idof>
         struct hadd_impl<simd<T, scalar>, Idof> {
            using Vec = simd< T, scalar  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type  value
            ) {
               return value;
            }
         };
   } // end of namespace details for template specialization of hadd_impl for scalar using T.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_CALC_CALC_SCALAR_HPP