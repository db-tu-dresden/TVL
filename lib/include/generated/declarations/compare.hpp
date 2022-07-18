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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/declarations/compare.hpp
 * \date 2022-07-18
 * \brief Compare primitives.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : d245ef8 (d245ef8e8a48a9e67c8e31391323e827e26229eb)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : 1e8135e (1e8135e36797c1a05bca927343985b30550ae4bf)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_COMPARE_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_COMPARE_HPP

namespace tvl {
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "equal".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct equal{};
   }
   /*
    * \brief Compares two vector registers for equality.
    * \details todo.
    * \param vec_a Left vector.
    * \param vec_b Right vector.
    * \return Vector mask type indicating whether vec_a[*]==vec_b[*].
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::mask_type equal(
         typename Vec::register_type vec_a, typename Vec::register_type vec_b
      ) {
         return functors::equal<Vec, Idof>::apply(
            vec_a, vec_b
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "between_inclusive".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct between_inclusive{};
   }
   /*
    * \brief Checks if the values of a vector are in a specific range (min[*] <= d[*] <= max[*]).
    * \details todo.
    * \param vec_data Data vector.
    * \param vec_min Minimum vector.
    * \param vec_max Maximum vector.
    * \return Vector mask type indicating whether the data is in the given range.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::mask_type between_inclusive(
         typename Vec::register_type vec_data, typename Vec::register_type vec_min, typename Vec::register_type vec_max
      ) {
         return functors::between_inclusive<Vec, Idof>::apply(
            vec_data, vec_min, vec_max
         );
      }
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_COMPARE_HPP