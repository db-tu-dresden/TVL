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
 * @file lib/generated/extensions/scalar.hpp
 * @date 30.03.2022
 */
#ifndef TUD_D2RG_TVL_LIB_GENERATED_EXTENSIONS_SCALAR_HPP
#define TUD_D2RG_TVL_LIB_GENERATED_EXTENSIONS_SCALAR_HPP

namespace tvl {
   struct scalar {
      template<Arithmetic BaseType, std::size_t VectorSizeInBits = sizeof(BaseType)*8>
         struct types {
            using default_size_in_bits = std::integral_constant< std::size_t, VectorSizeInBits >;
            using register_t  =
               BaseType;
            using mask_t =
               bool;
         };
   };
} // end of namespace tvl
#endif //TUD_D2RG_TVL_LIB_GENERATED_EXTENSIONS_SCALAR_HPP