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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/memory/memory_sse.hpp
 * \date 2022-11-11
 * \brief Memory related primitives.
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

#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_MEMORY_MEMORY_SSE_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_MEMORY_MEMORY_SSE_HPP

#include "../../declarations/memory.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, 1));
            }
         };
   } // end of namespace functors for template specialization of allocate for sse using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, 1));
            }
         };
   } // end of namespace functors for template specialization of allocate for sse using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, 1));
            }
         };
   } // end of namespace functors for template specialization of allocate for sse using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, 1));
            }
         };
   } // end of namespace functors for template specialization of allocate for sse using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, 1));
            }
         };
   } // end of namespace functors for template specialization of allocate for sse using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, 1));
            }
         };
   } // end of namespace functors for template specialization of allocate for sse using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, 1));
            }
         };
   } // end of namespace functors for template specialization of allocate for sse using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, 1));
            }
         };
   } // end of namespace functors for template specialization of allocate for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, 1));
            }
         };
   } // end of namespace functors for template specialization of allocate for sse using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, 1));
            }
         };
   } // end of namespace functors for template specialization of allocate for sse using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, alignment));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for sse using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, alignment));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for sse using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, alignment));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for sse using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, alignment));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for sse using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, alignment));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for sse using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, alignment));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for sse using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, alignment));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for sse using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, alignment));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, alignment));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for sse using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {

               return reinterpret_cast<typename Vec::base_type*>(_mm_malloc(count_bytes, alignment));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for sse using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {

               _mm_free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for sse using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {

               _mm_free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for sse using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {

               _mm_free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for sse using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {

               _mm_free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for sse using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {

               _mm_free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for sse using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {

               _mm_free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for sse using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {

               _mm_free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for sse using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {

               _mm_free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {

               _mm_free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for sse using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {

               _mm_free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for sse using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {

               std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for sse using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {

               std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for sse using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {

               std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for sse using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {

               std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for sse using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {

               std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for sse using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {

               std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for sse using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {

               std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for sse using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {

               std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {

               std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for sse using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {

               std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for sse using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_MEMORY_MEMORY_SSE_HPP