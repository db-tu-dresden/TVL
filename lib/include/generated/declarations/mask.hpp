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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/declarations/mask.hpp
 * \date 2022-07-15
 * \brief Mask related primitives.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : 2f759bb (2f759bba5004ee2d2fcec3b410bca4c93de5cf19)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : 1e8135e (1e8135e36797c1a05bca927343985b30550ae4bf)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_MASK_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_MASK_HPP

namespace tvl {
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "to_integral".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct to_integral{};
   }
   /*
    * \brief Forms an integral value from the most significant bits of every lane in a vector mask register.
    * \details todo.
    * \param vec_mask Vector mask register containing mask style data.
    * \return Integral value representing the vector mask register.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::base_type to_integral(
         typename Vec::mask_type vec_mask
      ) {
         return functors::to_integral<Vec, Idof>::apply(
            vec_mask
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "get_msb".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct get_msb{};
   }
   /*
    * \brief Retrieves the most significant bit of every element in a vector register and sets the corresponding bit in a base type.
    * \details todo.
    * \param vec Vector mask register containing mask style data.
    * \return Integral value representing the vector mask register.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::base_type get_msb(
         typename Vec::register_type vec
      ) {
         return functors::get_msb<Vec, Idof>::apply(
            vec
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "to_vector".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct to_vector{};
   }
   /*
    * \brief Forms an vector register from an integral where all bits are set in a lane if the corresponding mask bit is set to 1.
    * \details todo.
    * \param mask Vector mask register containing mask style data.
    * \return Integral value representing the vector mask register.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type to_vector(
         typename Vec::mask_type mask
      ) {
         return functors::to_vector<Vec, Idof>::apply(
            mask
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "mask_reduce".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct mask_reduce{};
   }
   /*
    * \brief Masks out every non relevant bit.
    * \details todo.
    * \param mask Integral value containing n (set) bits.
    * \return Integral value with only relevant bits set (or not).
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::base_type mask_reduce(
         typename Vec::base_type mask
      ) {
         return functors::mask_reduce<Vec, Idof>::apply(
            mask
         );
      }
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_MASK_HPP