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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/ls/ls_avx512.hpp
 * \date 2022-08-25
 * \brief Load/Store primitives
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
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_LS_LS_AVX512_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_LS_LS_AVX512_HPP

#include "../../declarations/ls.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_load_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_load_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_load_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_load_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_load_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_load_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_load_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_load_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_load_ps(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_load_pd(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_loadu_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_loadu_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_loadu_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_loadu_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_loadu_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_loadu_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_loadu_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_loadu_si512(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_loadu_ps(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const * memory
            ) {
               return _mm512_loadu_pd(reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of loadu for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_store_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_store_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_store_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_store_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_store_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_store_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_store_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_store_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_store_ps(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_store_pd(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_storeu_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_storeu_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_storeu_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_storeu_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_storeu_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_storeu_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_storeu_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_storeu_si512(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_storeu_ps(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
               typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               _mm512_storeu_pd(reinterpret_cast<void *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm512_set1_epi8(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm512_set1_epi16(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm512_set1_epi32(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm512_set1_epi64(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm512_set1_epi8(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm512_set1_epi16(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm512_set1_epi32(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm512_set1_epi64(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm512_set1_ps(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type value
            ) {
               return _mm512_set1_pd(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               return _mm512_mask_i64gather_epi64( source, mask, index[0], reinterpret_cast< void const * >( memory ), 8 );
            }
         };
   } // end of namespace functors for template specialization of gather for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm512_set_epi8(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm512_set_epi16(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm512_set_epi32(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm512_set_epi64(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm512_set_epi8(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm512_set_epi16(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm512_set_epi32(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm512_set_epi64(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm512_set_ps(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return _mm512_set_pd(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx512 using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_LS_LS_AVX512_HPP