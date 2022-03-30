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
 * @file lib/generated/definitions/binary/binary_scalar.hpp
 * @date 30.03.2022
 * @brief Bit manipulation primitives. Implementation for scalar
 */
#ifndef TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_BINARY_BINARY_SCALAR_HPP
#define TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_BINARY_BINARY_SCALAR_HPP

#include "../../declarations/binary.hpp"
namespace tvl {
   namespace details {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: scalar.
       *        Data Type: T
       *  Extension Flags: []
       */
      template<typename T, ImplementationDegreeOfFreedom Idof>
         struct binary_and_impl<simd<T, scalar>, Idof> {
            using Vec = simd< T, scalar  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  a, typename Vec::register_type  b
            ) {
               return a & b;
            }
         };
   } // end of namespace details for template specialization of binary_and_impl for scalar using T.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_BINARY_BINARY_SCALAR_HPP