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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/calc/calc_avx512.hpp
 * \date 2022-08-25
 * \brief This file contains arithmetic primitives.
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
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_AVX512_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_AVX512_HPP

#include <array>
#include <cstddef>
#include "../../declarations/calc.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_add_epi8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_add_epi16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_add_epi32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_add_epi64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_add_epi8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_add_epi16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_add_epi32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_add_epi64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_add_ps(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_add_pd(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_mul_ps(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_mul_pd(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512bw']
       * @note: Signed multiplication.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_mullo_epi16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_mullo_epi16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       * @note: Signed multiplication.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_mullo_epi32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       * @note: Signed multiplication.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_mullo_epi32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512dq']
       * @note: Signed multiplication.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_mullo_epi64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512dq']
       * @note: Signed multiplication.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm512_mullo_epi64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
               _mm512_store_si512(reinterpret_cast<void*>(buffer_a.data()), vec_a);
               _mm512_store_si512(reinterpret_cast<void*>(buffer_b.data()), vec_b);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] *= buffer_b[i];
               }
               return _mm512_load_si512(reinterpret_cast<void const *>(buffer_a.data()));
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
               _mm512_store_si512(reinterpret_cast<void*>(buffer_a.data()), vec_a);
               _mm512_store_si512(reinterpret_cast<void*>(buffer_b.data()), vec_b);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] *= buffer_b[i];
               }
               return _mm512_load_si512(reinterpret_cast<void const *>(buffer_a.data()));
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
               _mm512_store_si512(reinterpret_cast<void*>(buffer_a.data()), vec_a);
               _mm512_store_si512(reinterpret_cast<void*>(buffer_b.data()), vec_b);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] *= buffer_b[i];
               }
               return _mm512_load_si512(reinterpret_cast<void const *>(buffer_a.data()));
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
               _mm512_store_si512(reinterpret_cast<void*>(buffer_a.data()), vec_a);
               _mm512_store_si512(reinterpret_cast<void*>(buffer_b.data()), vec_b);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] *= buffer_b[i];
               }
               return _mm512_load_si512(reinterpret_cast<void const *>(buffer_a.data()));
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
               _mm512_store_si512(reinterpret_cast<void*>(buffer_a.data()), vec_a);
               _mm512_store_si512(reinterpret_cast<void*>(buffer_b.data()), vec_b);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] *= buffer_b[i];
               }
               return _mm512_load_si512(reinterpret_cast<void const *>(buffer_a.data()));
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
               _mm512_store_si512(reinterpret_cast<void*>(buffer_a.data()), vec_a);
               _mm512_store_si512(reinterpret_cast<void*>(buffer_b.data()), vec_b);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] *= buffer_b[i];
               }
               return _mm512_load_si512(reinterpret_cast<void const *>(buffer_a.data()));
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
               _mm512_store_si512(reinterpret_cast<void*>(buffer_a.data()), vec_a);
               _mm512_store_si512(reinterpret_cast<void*>(buffer_b.data()), vec_b);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] *= buffer_b[i];
               }
               return _mm512_load_si512(reinterpret_cast<void const *>(buffer_a.data()));
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
               _mm512_store_si512(reinterpret_cast<void*>(buffer_a.data()), vec_a);
               _mm512_store_si512(reinterpret_cast<void*>(buffer_b.data()), vec_b);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] *= buffer_b[i];
               }
               return _mm512_load_si512(reinterpret_cast<void const *>(buffer_a.data()));
            }
         };
   } // end of namespace functors for template specialization of mul for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       * @note: Be aware, that this intrinsic is flagged as 'sequence' by INTEL.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               return _mm512_reduce_add_ps(value);
            }
         };
   } // end of namespace functors for template specialization of hadd for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       * @note: Be aware, that this intrinsic is flagged as 'sequence' by INTEL.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               return _mm512_reduce_add_pd(value);
            }
         };
   } // end of namespace functors for template specialization of hadd for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       * @note: Signed Addition. Be aware, that this intrinsic is flagged as 'sequence' by INTEL.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               return _mm512_reduce_add_epi32(value);
            }
         };
   } // end of namespace functors for template specialization of hadd for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       * @note: Signed Addition. Be aware, that this intrinsic is flagged as 'sequence' by INTEL.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               return _mm512_reduce_add_epi64(value);
            }
         };
   } // end of namespace functors for template specialization of hadd for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       * @note: Signed Addition. Be aware, that this intrinsic is flagged as 'sequence' by INTEL.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               return _mm512_reduce_add_epi32(value);
            }
         };
   } // end of namespace functors for template specialization of hadd for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       * @note: Signed Addition. Be aware, that this intrinsic is flagged as 'sequence' by INTEL.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               return _mm512_reduce_add_epi64(value);
            }
         };
   } // end of namespace functors for template specialization of hadd for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
               typename Vec::base_type result = 0;
               _mm512_store_si512(reinterpret_cast<void*>(buffer.data()), value);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result += buffer[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of hadd for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
               typename Vec::base_type result = 0;
               _mm512_store_si512(reinterpret_cast<void*>(buffer.data()), value);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result += buffer[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of hadd for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
               typename Vec::base_type result = 0;
               _mm512_store_si512(reinterpret_cast<void*>(buffer.data()), value);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result += buffer[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of hadd for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
               typename Vec::base_type result = 0;
               _mm512_store_si512(reinterpret_cast<void*>(buffer.data()), value);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result += buffer[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of hadd for avx512 using int16_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_AVX512_HPP