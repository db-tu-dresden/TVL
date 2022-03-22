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
 * @file /home/runner/work/TVLPrimitiveData/TVLPrimitiveData/lib/generated/declarations/calc.hpp
 * @date 22.03.2022
 * @brief Arithmetic primitives.
 */
#ifndef TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DECLARATIONS_CALC_HPP
#define TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DECLARATIONS_CALC_HPP

#include "immintrin.h"

namespace tvl {
   namespace details {
      template< VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof >
      struct add_impl{};
   } // end namespace details
   /*
    * @brief Adds two vector registers.
    * @details todo.
    * @param vec_a First vector.
    * @param vec_b Second vector.
    * @return Vector containing result of the addition.
    */
   template< VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround >
   [[nodiscard]] 
   TVL_FORCE_INLINE typename Vec::register_type add(
      typename Vec::register_type  vec_a, 
      typename Vec::register_type  vec_b
   ) {
      return details::add_impl< Vec, Idof >::apply(
         vec_a, vec_b
      );
   }
   
} // end of namespace tvl

#endif //TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DECLARATIONS_CALC_HPP