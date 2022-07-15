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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/declarations/ls.hpp
 * \date 2022-07-15
 * \brief Load/Store primitives
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
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_LS_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_LS_HPP

namespace tvl {
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "load".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct load{};
   }
   /*
    * \brief Loads data from aligned memory into a vector register.
    * \details todo.
    * \param memory Aligned memory which should be transferred into a vector register.
    * \return Vector containing the loaded data.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type load(
         typename Vec::base_type const * memory
      ) {
         return functors::load<Vec, Idof>::apply(
            memory
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "loadu".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct loadu{};
   }
   /*
    * \brief Loads data from (un)aligned memory into a vector register.
    * \details todo.
    * \param memory (Un)aligned memory which should be transferred into a vector register.
    * \return Vector containing the loaded data.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type loadu(
         typename Vec::base_type const * memory
      ) {
         return functors::loadu<Vec, Idof>::apply(
            memory
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "store".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct store{};
   }
   /*
    * \brief Stores data from a vector register to aligned memory.
    * \details todo.
    * \param memory Aligned memory where the data should be stored into.
    * \param data Vector containing the data.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      TVL_FORCE_INLINE void store(
         typename Vec::base_type * memory, typename Vec::register_type data
      ) {
         functors::store<Vec, Idof>::apply(
            memory, data
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "storeu".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct storeu{};
   }
   /*
    * \brief Stores data from a vector register to (un)aligned memory.
    * \details todo.
    * \param memory (Un)aligned memory where the data should be stored into.
    * \param data Vector containing the data.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      TVL_FORCE_INLINE void storeu(
         typename Vec::base_type * memory, typename Vec::register_type data
      ) {
         functors::storeu<Vec, Idof>::apply(
            memory, data
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "set1".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct set1{};
   }
   /*
    * \brief Broadcasts a single value into all lanes of a vector register.
    * \details todo.
    * \param value Value which should be broadcasted.
    * \return Vector containing the same value in all lanes.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type set1(
         typename Vec::base_type value
      ) {
         return functors::set1<Vec, Idof>::apply(
            value
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "gather".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct gather{};
   }
   /*
    * \brief Transfers data from arbitrary locations into a vector register.
    * \details todo.
    * \param source Vector register containing values which should be preserved depending on the mask (if mask[i] == 0).
    * \param memory (Start)pointer of the memory (which is used as base for address calculation).
    * \param index Offsets array containing simd<offset_t, EXTENSION> register_types containing relative offsets to the start pointer (the number of array elements depend on the sizeof(offset_type)/sizeof(base_type) ratio, where sizeof(offset_type) should be 8).
    * \param mask Mask indicating which lanes should be gathered.
    * \return Vector containing gathered data.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type gather(
         typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
      ) {
         return functors::gather<Vec, Idof>::apply(
            source, memory, index, mask
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "set".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct set{};
   }
   /*
    * \brief Transfers provided elements into a vector register.
    * \details todo.
    * \param args Values which should be transferred.
    * \return Vector register containing the values.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround, typename... Ts>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type set(
         Ts... args
      ) {
         return functors::set<Vec, Idof>::apply(
            args...
         );
      }
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_LS_HPP