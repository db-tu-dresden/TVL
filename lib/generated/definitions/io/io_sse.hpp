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
 * @file lib/generated/definitions/io/io_sse.hpp
 * @date 30.03.2022
 * @brief Input/Output primitives. Implementation for sse
 */
#ifndef TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_IO_IO_SSE_HPP
#define TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_IO_IO_SSE_HPP

#include "../../declarations/io.hpp"
namespace tvl {
   namespace details {
      /**
       * @brief: Template specialization of implementation for "to_ostream".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_ostream_impl<simd<int64_t, sse>, Idof> {
            using Vec = simd< int64_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static std::ostream & apply(
               std::ostream &  out, typename Vec::register_type const  data
            ) {
               out << data[1]<< "|" << data[0] << "\n";
return out;
            }
         };
   } // end of namespace details for template specialization of to_ostream_impl for sse using int64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_IO_IO_SSE_HPP