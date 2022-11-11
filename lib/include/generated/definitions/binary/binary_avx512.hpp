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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/binary/binary_avx512.hpp
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

#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_AVX512_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_AVX512_HPP

#include "../../declarations/binary.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512dq']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm512_and_ps(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512dq']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {

               return _mm512_and_pd(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );

               return _mm512_and_si512(_mm512_castsi512_ps(a) ,_mm512_castsi512_ps(b));
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );

               return _mm512_and_si512(_mm512_castsi512_pd(a) ,_mm512_castsi512_pd(b));
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_AVX512_HPP