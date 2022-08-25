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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/declarations/calc.hpp
 * \date 2022-08-25
 * \brief This file contains arithmetic primitives.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : 09e790d (09e790d9cc40c4de3fbe683afe9241a803f25915)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : be13979 (be139799c677e3ddb66ae930c197c81312c29456)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_CALC_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_CALC_HPP

namespace tvl {
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "add".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct add{};
   }
   /*
    * \brief Adds two vector registers.
    * \details todo.
    * \param vec_a First vector.
    * \param vec_b Second vector.
    * \return Vector containing result of the addition.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type add(
          typename Vec::register_type vec_a, typename Vec::register_type vec_b
      ) {
         return functors::add<Vec, Idof>::apply(
            vec_a,vec_b
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "mul".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct mul{};
   }
   /*
    * \brief Multiplies two vector registers.
    * \details todo.
    * \param vec_a First vector.
    * \param vec_b Second vector.
    * \return Vector containing result of the multiplication.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type mul(
          typename Vec::register_type vec_a, typename Vec::register_type vec_b
      ) {
         return functors::mul<Vec, Idof>::apply(
            vec_a,vec_b
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "hadd".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct hadd{};
   }
   /*
    * \brief Reduces the elements to a sum.
    * \details todo.
    * \param value Input vector.
    * \return Scalar value after adding all elements in the vector.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::base_type hadd(
          typename Vec::register_type value
      ) {
         return functors::hadd<Vec, Idof>::apply(
            value
         );
      }
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_CALC_HPP