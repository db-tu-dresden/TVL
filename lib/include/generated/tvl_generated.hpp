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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/tvl_generated.hpp
 * \date 2022-11-11
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : 1ac1135 (1ac11352efd6d9d52816eed86ba5d99af6879f89)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : be13979 (be139799c677e3ddb66ae930c197c81312c29456)
 *
 */

#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_TVL_GENERATED_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_TVL_GENERATED_HPP

#include "extensions/simd/intel/avx2.hpp"
#include "extensions/simd/arm/neon.hpp"
#include "extensions/scalar.hpp"
#include "extensions/simd/intel/avx512.hpp"
#include "extensions/simd/intel/sse.hpp"
#include "extensions/simt/cuda.hpp"
#include "declarations/ls.hpp"
#include "declarations/binary.hpp"
#include "declarations/compare.hpp"
#include "declarations/memory.hpp"
#include "declarations/io.hpp"
#include "declarations/calc.hpp"
#include "declarations/mask.hpp"
#include "definitions/ls/ls_avx512.hpp"
#include "definitions/ls/ls_avx2.hpp"
#include "definitions/ls/ls_sse.hpp"
#include "definitions/ls/ls_neon.hpp"
#include "definitions/ls/ls_scalar.hpp"
#include "definitions/binary/binary_avx512.hpp"
#include "definitions/binary/binary_avx2.hpp"
#include "definitions/binary/binary_sse.hpp"
#include "definitions/binary/binary_neon.hpp"
#include "definitions/binary/binary_scalar.hpp"
#include "definitions/compare/compare_avx512.hpp"
#include "definitions/compare/compare_avx2.hpp"
#include "definitions/compare/compare_sse.hpp"
#include "definitions/compare/compare_neon.hpp"
#include "definitions/compare/compare_scalar.hpp"
#include "definitions/memory/memory_avx512.hpp"
#include "definitions/memory/memory_avx2.hpp"
#include "definitions/memory/memory_sse.hpp"
#include "definitions/memory/memory_scalar.hpp"
#include "definitions/io/io_avx512.hpp"
#include "definitions/io/io_avx2.hpp"
#include "definitions/io/io_sse.hpp"
#include "definitions/io/io_neon.hpp"
#include "definitions/calc/calc_cuda.hpp"
#include "definitions/calc/calc_avx512.hpp"
#include "definitions/calc/calc_avx2.hpp"
#include "definitions/calc/calc_sse.hpp"
#include "definitions/calc/calc_neon.hpp"
#include "definitions/calc/calc_scalar.hpp"
#include "definitions/mask/mask_avx512.hpp"
#include "definitions/mask/mask_avx2.hpp"
#include "definitions/mask/mask_sse.hpp"
#include "definitions/mask/mask_neon.hpp"
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_TVL_GENERATED_HPP