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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/static/simd/simd_primitive_concepts.hpp
 * \date 2022-07-20
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : 6e0d9db (6e0d9db4a214b4db8eedbf84c806d01f3372705d)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : 1e8135e (1e8135e36797c1a05bca927343985b30550ae4bf)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_STATIC_SIMD_SIMD_PRIMITIVE_CONCEPTS_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_STATIC_SIMD_SIMD_PRIMITIVE_CONCEPTS_HPP

#include "../utils/type_concepts.hpp"
namespace tvl {
   
#ifdef TVL_USE_CONCEPTS
   template< typename T >
   concept SimdPrimitiveImpl = requires {
      { T::native_supported() } -> std::same_as< bool >;
   } &&
      ( T::native_supported() || (! T::native_supported() ) );
#else
#define SimdPrimitiveImpl class
#endif
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_STATIC_SIMD_SIMD_PRIMITIVE_CONCEPTS_HPP