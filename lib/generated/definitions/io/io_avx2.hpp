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
 * @file /home/runner/work/TVLGen/TVLGen/lib/generated/definitions/io/io_avx2.hpp
 * @date 23.03.2022
 * @brief Input/Output primitives. Implementation for avx2
 */
#ifndef TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_GENERATED_DEFINITIONS_IO_IO_AVX2_HPP
#define TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_GENERATED_DEFINITIONS_IO_IO_AVX2_HPP

#include "../../declarations/io.hpp"

namespace tvl {
   namespace details {
      template<  ImplementationDegreeOfFreedom Idof >
      struct to_ostream_impl< simd< int64_t, avx2 >, Idof > {
         using Vec = simd< int64_t, avx2  >;
         static constexpr bool native_supported() {
            return true;
         }
   /*
    * @brief Loads data from aligned memory into a vector register.
    * @details todo.
    * @param out 
    * @param data 
    * @return 
    */
         [[nodiscard]] 
         TVL_FORCE_INLINE static std::ostream & apply(
            std::ostream &  out, 
            typename Vec::register_type const  data
         ) {
            for(auto idx = 0; idx < 4; ++idx ) {
               out << data[3-idx] << "|";
            }
            out << "\n";
            return out;

         }
      };
   } // end of namespace details for template specialization of to_ostream_impl for avx2 using int64_t.
   
} // end of namespace tvl

#endif //TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_GENERATED_DEFINITIONS_IO_IO_AVX2_HPP