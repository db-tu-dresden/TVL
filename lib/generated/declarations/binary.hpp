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
 * @file lib/generated/declarations/binary.hpp
 * @date 30.03.2022
 * @brief Bit manipulation primitives.
 */
#ifndef TUD_D2RG_TVL_LIB_GENERATED_DECLARATIONS_BINARY_HPP
#define TUD_D2RG_TVL_LIB_GENERATED_DECLARATIONS_BINARY_HPP

namespace tvl {
   namespace details {
      // Forward declaration of implementation struct for TVL-primitive "binary_and".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct binary_and_impl{};
   }
   /*
    * @brief Binary ANDs two vector registers.
    * @details todo.
    * @param a First vector.
    * @param b Second vector.
    * @return Vector containing result of the binary AND.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
   [[nodiscard]] 
   TVL_FORCE_INLINE typename Vec::register_type binary_and(
      typename Vec::register_type a, typename Vec::register_type b
   ) {
      return details::binary_and_impl< Vec, Idof >::apply(
         a, b
      );
   }
} // end of namespace tvl
#endif //TUD_D2RG_TVL_LIB_GENERATED_DECLARATIONS_BINARY_HPP