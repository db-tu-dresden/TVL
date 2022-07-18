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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/binary/binary_avx2.hpp
 * \date 2022-07-18
 * \brief Bit manipulation primitives.
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
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_AVX2_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_AVX2_HPP

#include "../../declarations/binary.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               return _mm256_and_si256(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               return _mm256_and_si256(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               return _mm256_and_si256(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               return _mm256_and_si256(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               return _mm256_and_si256(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               return _mm256_and_si256(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               return _mm256_and_si256(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               return _mm256_and_si256(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );
               return _mm256_and_pd(_mm512_castsi256_pd(a),_mm512_castsi256_pd(b));
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );
               return _mm256_and_pd(_mm512_castsi256_pd(a),_mm512_castsi256_pd(b));
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );
               return _mm256_and_pd(_mm512_castsi256_pd(a),_mm512_castsi256_pd(b));
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );
               return _mm256_and_pd(_mm512_castsi256_pd(a),_mm512_castsi256_pd(b));
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );
               return _mm256_and_pd(_mm512_castsi256_pd(a),_mm512_castsi256_pd(b));
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );
               return _mm256_and_pd(_mm512_castsi256_pd(a),_mm512_castsi256_pd(b));
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );
               return _mm256_and_pd(_mm512_castsi256_pd(a),_mm512_castsi256_pd(b));
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );
               return _mm256_and_pd(_mm512_castsi256_pd(a),_mm512_castsi256_pd(b));
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               return _mm256_and_ps(a,b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type a, typename Vec::register_type b
            ) {
               return _mm256_and_pd(a,b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx2 using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_AVX2_HPP