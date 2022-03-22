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
 * @file /home/runner/work/TVLPrimitiveData/TVLPrimitiveData/lib/generated/declarations/io.hpp
 * @date 22.03.2022
 * @brief Input/Output primitives.
 */
#ifndef TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DECLARATIONS_IO_HPP
#define TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DECLARATIONS_IO_HPP


namespace tvl {
   namespace details {
      template< VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof >
      struct to_ostream_impl{};
   } // end namespace details
   /*
    * @brief Loads data from aligned memory into a vector register.
    * @details todo.
    * @param out 
    * @param data 
    * @return 
    */
   template< VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround >
   [[nodiscard]] 
   TVL_FORCE_INLINE std::ostream & to_ostream(
      std::ostream &  out, 
      typename Vec::register_type const  data
   ) {
      return details::to_ostream_impl< Vec, Idof >::apply(
         out, data
      );
   }
   
} // end of namespace tvl

#endif //TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_GENERATED_DECLARATIONS_IO_HPP