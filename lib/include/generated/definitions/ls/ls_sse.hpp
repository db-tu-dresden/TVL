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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/ls/ls_sse.hpp
 * \date 2022-07-15
 * \brief Load/Store primitives
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : fcfbe18 (fcfbe18f11282e1c45aac61384b956ec0542f43b)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : 1e8135e (1e8135e36797c1a05bca927343985b30550ae4bf)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_LS_LS_SSE_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_LS_LS_SSE_HPP

#include "../../declarations/ls.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_load_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for sse using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_load_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for sse using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_load_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for sse using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_load_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for sse using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_load_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for sse using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_load_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for sse using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_load_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for sse using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_load_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_load_ps(memory);
            }
         };
   } // end of namespace functors for template specialization of load for sse using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_load_pd(memory);
            }
         };
   } // end of namespace functors for template specialization of load for sse using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for sse using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for sse using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for sse using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for sse using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for sse using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for sse using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for sse using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_load_ps(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for sse using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm_load_pd(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for sse using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_store_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for sse using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_store_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for sse using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_store_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for sse using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_store_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for sse using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_store_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for sse using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_store_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for sse using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_store_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for sse using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_store_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_store_ps(memory, data);
            }
         };
   } // end of namespace functors for template specialization of store for sse using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_store_pd(memory, data);
            }
         };
   } // end of namespace functors for template specialization of store for sse using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_storeu_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for sse using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_storeu_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for sse using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_storeu_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for sse using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_storeu_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for sse using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_storeu_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for sse using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_storeu_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for sse using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_storeu_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for sse using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_storeu_si128(reinterpret_cast<__m128i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_storeu_ps(memory, data);
            }
         };
   } // end of namespace functors for template specialization of storeu for sse using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm_storeu_pd(memory, data);
            }
         };
   } // end of namespace functors for template specialization of storeu for sse using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm_set1_epi8(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for sse using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm_set1_epi16(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for sse using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm_set1_epi32(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for sse using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm_set1_epi8(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for sse using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm_set1_epi16(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for sse using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm_set1_epi32(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for sse using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm_set1_epi64x(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for sse using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm_set1_epi64x(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm_set1_ps(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for sse using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm_set1_pd(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for sse using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );
               return _mm_set_epi64x( ( mask[ 1 ] == 0 ) ? source[ 1 ] : memory[ index[ 0 ][ 1 ] ], ( mask[ 0 ] == 0 ) ? source[ 0 ] : memory[ index[ 0 ][ 0 ] ] );
            }
         };
   } // end of namespace functors for template specialization of gather for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm_set_epi8(args...);
            }
         };
   } // end of namespace functors for template specialization of set for sse using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm_set_epi16(args...);
            }
         };
   } // end of namespace functors for template specialization of set for sse using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm_set_epi32(args...);
            }
         };
   } // end of namespace functors for template specialization of set for sse using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm_set_epi8(args...);
            }
         };
   } // end of namespace functors for template specialization of set for sse using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm_set_epi16(args...);
            }
         };
   } // end of namespace functors for template specialization of set for sse using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm_set_epi32(args...);
            }
         };
   } // end of namespace functors for template specialization of set for sse using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm_set_epi64x(args...);
            }
         };
   } // end of namespace functors for template specialization of set for sse using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm_set_epi64x(args...);
            }
         };
   } // end of namespace functors for template specialization of set for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm_set_ps(args...);
            }
         };
   } // end of namespace functors for template specialization of set for sse using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm_set_pd(args...);
            }
         };
   } // end of namespace functors for template specialization of set for sse using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_LS_LS_SSE_HPP