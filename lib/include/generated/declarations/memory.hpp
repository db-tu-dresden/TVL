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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/declarations/memory.hpp
 * \date 2022-08-25
 * \brief Memory related primitives.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : 8c16c1c (8c16c1c178d9ae00eca1e7a680490792455e271e)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : be13979 (be139799c677e3ddb66ae930c197c81312c29456)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_MEMORY_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_MEMORY_HPP

#include <cstring>
namespace tvl {
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "allocate".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct allocate{};
   }
   /*
    * \brief Allocates (unaligned) contiguous memory.
    * \details todo.
    * \param count_bytes Number of bytes which should be allocated.
    * \return Pointer to allocated memory.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::base_type * allocate(
         std::size_t count_bytes
      ) {
         return functors::allocate<Vec, Idof>::apply(
            count_bytes
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "allocate_aligned".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned{};
   }
   /*
    * \brief Allocates aligned contiguous memory.
    * \details todo.
    * \param count_bytes Number of bytes which should be allocated.
    * \param alignment Alignment bytes.
    * \return Pointer to allocated memory.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::base_type * allocate_aligned(
         std::size_t count_bytes, std::size_t alignment
      ) {
         return functors::allocate_aligned<Vec, Idof>::apply(
            count_bytes, alignment
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "deallocate".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct deallocate{};
   }
   /*
    * \brief Deallocates (possibly aligned) contiguous memory.
    * \details todo.
    * \param ptr Pointer to memory which should be deallocated.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      TVL_FORCE_INLINE void deallocate(
         typename Vec::base_type * ptr
      ) {
         functors::deallocate<Vec, Idof>::apply(
            ptr
         );
      }
   namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "memory_cp".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct memory_cp{};
   }
   /*
    * \brief Copy memory.
    * \details todo.
    * \param dst Destination.
    * \param src Source.
    * \param count_bytes Number of bytes, which should be copied
    * \param copy_kind Which type of copy should be performed: {0: host->host, 1: host->device, 2: device->host, 3: device->device}
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      TVL_FORCE_INLINE void memory_cp(
         typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, int copy_kind=0
      ) {
         functors::memory_cp<Vec, Idof>::apply(
            dst, src, count_bytes, copy_kind
         );
      }
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DECLARATIONS_MEMORY_HPP