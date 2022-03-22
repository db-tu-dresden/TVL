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
 * @file /home/runner/work/TVLPrimitiveData/TVLPrimitiveData/lib/generated/declarations/ls.hpp
 * @date 22.03.2022
 * @brief Load/Store primitives.
 */
#ifndef TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DECLARATIONS_LS_HPP
#define TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DECLARATIONS_LS_HPP


namespace tvl {
   namespace details {
      template< VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof >
      struct load_impl{};
   } // end namespace details
   /*
    * @brief Loads data from aligned memory into a vector register.
    * @details todo.
    * @param memory Aligned memory which should be transferred into a vector register.
    * @return Vector containing the loaded data.
    */
   template< VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround >
   [[nodiscard]] 
   TVL_FORCE_INLINE typename Vec::register_type load(
      typename Vec::base_type const *  memory
   ) {
      return details::load_impl< Vec, Idof >::apply(
         memory
      );
   }
   
   namespace details {
      template< VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof >
      struct loadu_impl{};
   } // end namespace details
   /*
    * @brief Loads data from (un)aligned memory into a vector register.
    * @details todo.
    * @param memory (Un)aligned memory which should be transferred into a vector register.
    * @return Vector containing the loaded data.
    */
   template< VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround >
   [[nodiscard]] 
   TVL_FORCE_INLINE typename Vec::register_type loadu(
      typename Vec::base_type const *  memory
   ) {
      return details::loadu_impl< Vec, Idof >::apply(
         memory
      );
   }
   
   namespace details {
      template< VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof >
      struct set1_impl{};
   } // end namespace details
   /*
    * @brief Broadcasts a single value into all lanes of a vector register.
    * @details todo.
    * @param value Value which should be broadcasted.
    * @return Vector containing the same value in all lanes.
    */
   template< VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround >
   [[nodiscard]] 
   TVL_FORCE_INLINE typename Vec::register_type set1(
      typename Vec::base_type  value
   ) {
      return details::set1_impl< Vec, Idof >::apply(
         value
      );
   }
   
   namespace details {
      template< VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof >
      struct gather_impl{};
   } // end namespace details
   /*
    * @brief Transfers data from arbitrary locations into a vector register.
    * @details todo.
    * @param source Vector register containing values which should be preserved depending on the mask (if mask[i] == 0).
    * @param memory (Start)pointer of the memory (which is used as base for address calculation).
    * @param index Offsets (in base_type granularity) relative to the start pointer.
    * @param mask Mask indicating which lanes should be gathered.
    * @return Vector containing gathered data.
    */
   template< VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround >
   [[nodiscard]] 
   TVL_FORCE_INLINE typename Vec::register_type gather(
      typename Vec::register_type  source, 
      typename Vec::base_type const *  memory, 
      typename Vec::register_type  index, 
      typename Vec::mask_type  mask
   ) {
      return details::gather_impl< Vec, Idof >::apply(
         source, memory, index, mask
      );
   }
   
} // end of namespace tvl

#endif //TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DECLARATIONS_LS_HPP