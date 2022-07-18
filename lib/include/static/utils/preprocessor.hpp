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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/static/utils/preprocessor.hpp
 * \date 2022-07-18
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
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_STATIC_UTILS_PREPROCESSOR_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_STATIC_UTILS_PREPROCESSOR_HPP

namespace tvl {
   #ifndef TVL_FORCE_INLINE
   #   define TVL_FORCE_INLINE inline __attribute__((always_inline))
   #endif
   #ifndef TVL_NO_NATIVE_SUPPORT_WARNING
   #   define TVL_NO_NATIVE_SUPPORT_WARNING [[deprecated("This primitive is not supported by your hardware natively. Thus, a workaround is used.")]]
   #endif
   #ifndef TVL_DE_TYPE
   #   define TVL_DEP_TYPE(CONDITION, IFBRANCH, ELSEBRANCH) std::conditional_t< CONDITION, IFBRANCH, ELSEBRANCH >
   #endif
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_STATIC_UTILS_PREPROCESSOR_HPP