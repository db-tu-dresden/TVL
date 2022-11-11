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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/binary/binary_sse.hpp
 * \date 2022-11-11
 * \brief Bit manipulation primitives.
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

#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_SSE_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_SSE_HPP

#include "../../declarations/binary.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for sse using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for sse using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for sse using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for sse using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for sse using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for sse using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for sse using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for sse using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm_and_ps(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for sse using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm_and_pd(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for sse using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_SSE_HPP