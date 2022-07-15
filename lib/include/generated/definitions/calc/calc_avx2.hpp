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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/calc/calc_avx2.hpp
 * \date 2022-07-15
 * \brief This file contains arithmetic primitives.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : 2f759bb (2f759bba5004ee2d2fcec3b410bca4c93de5cf19)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : 1e8135e (1e8135e36797c1a05bca927343985b30550ae4bf)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_AVX2_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_AVX2_HPP

#include <array>
#include <cstddef>
#include "../../declarations/calc.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_add_epi8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_add_epi16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_add_epi32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_add_epi64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_add_epi8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_add_epi16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_add_epi32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       * @note: Signed addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_add_epi64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_add_ps(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_add_pd(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of add for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_mul_ps(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_mul_pd(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       * @note: Signed multiplication.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_mullo_epi16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       * @note: Signed multiplication.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_mullo_epi16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       * @note: Signed multiplication.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_mullo_epi32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       * @note: Signed multiplication.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return _mm256_mullo_epi32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of mul for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
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
               _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
               _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] *= buffer_b[i];
               }
               return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
         };
   } // end of namespace functors for template specialization of mul for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
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
               _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
               _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] *= buffer_b[i];
               }
               return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
         };
   } // end of namespace functors for template specialization of mul for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
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
               _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
               _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] *= buffer_b[i];
               }
               return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
         };
   } // end of namespace functors for template specialization of mul for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
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
               _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
               _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] *= buffer_b[i];
               }
               return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
         };
   } // end of namespace functors for template specialization of mul for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['sse2', 'sse3', 'avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );
               //https://stackoverflow.com/questions/49941645/get-sum-of-values-stored-in-m256d-with-sse-avx
               __m128d vlow  = _mm256_castpd256_pd128(value);
               __m128d vhigh = _mm256_extractf128_pd(value, 1);
               vlow  = _mm_add_pd(vlow, vhigh);
               __m128d high64 = _mm_unpackhi_pd(vlow, vlow);
               return  _mm_cvtsd_f64(_mm_add_sd(vlow, high64));
            }
         };
   } // end of namespace functors for template specialization of hadd for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['sse', 'sse2', 'sse3', 'avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );
               __m128 vlow  = _mm256_castps256_ps128(value);
               __m128 vhigh = _mm256_extractf128_ps(value, 1);
               vlow = _mm_add_ps(vlow, vhigh);
               __m128 res = _mm_hadd_ps(vlow, vlow);
               return _mm_cvtss_f32(res) + _mm_cvtss_f32(_mm_castsi128_ps(_mm_bsrli_si128(_mm_castps_si128(res),sizeof(float))));
            }
         };
   } // end of namespace functors for template specialization of hadd for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse2', 'avx']
       * @note: Signed Addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );
               __m128i vlow = _mm256_castsi256_si128(value);
               __m128i vhigh = _mm256_extractf128_si256(value, 1);
               vlow = _mm_add_epi64(vlow, vhigh);
               __m128i high64 = _mm_unpackhi_epi64(vlow, vlow);
               return _mm_cvtsi128_si64(_mm_add_epi64(vlow, high64));
            }
         };
   } // end of namespace functors for template specialization of hadd for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2', 'avx']
       * @note: Signed Addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );
               __m128i vlow = _mm256_castsi256_si128(value);
               __m128i vhigh = _mm256_extractf128_si256(value, 1);
               vlow = _mm_add_epi64(vlow, vhigh);
               __m128i high64 = _mm_unpackhi_epi64(vlow, vlow);
               return _mm_cvtsi128_si64(_mm_add_epi64(vlow, high64));
            }
         };
   } // end of namespace functors for template specialization of hadd for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2', 'ssse3', 'avx']
       * @note: Signed Addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );
               __m128i vlow = _mm256_castsi256_si128(value);
               __m128i vhigh = _mm256_extractf128_si256(value, 1);
               vlow = _mm_add_epi32(vlow, vhigh);
               __m128i res = _mm_hadd_epi32(vlow, vlow);
               return _mm_cvtsi128_si32(res) + _mm_cvtsi128_si32(_mm_bsrli_si128(res,sizeof(uint32_t)));
            }
         };
   } // end of namespace functors for template specialization of hadd for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['sse2', 'ssse3', 'avx']
       * @note: Signed Addition.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type value
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );
               __m128i vlow = _mm256_castsi256_si128(value);
               __m128i vhigh = _mm256_extractf128_si256(value, 1);
               vlow = _mm_add_epi32(vlow, vhigh);
               __m128i res = _mm_hadd_epi32(vlow, vlow);
               return _mm_cvtsi128_si32(res) + _mm_cvtsi128_si32(_mm_bsrli_si128(res,sizeof(uint32_t)));
            }
         };
   } // end of namespace functors for template specialization of hadd for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
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
               _mm256_store_si256(reinterpret_cast<__m256i*>(buffer.data()), value);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result += buffer[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of hadd for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
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
               _mm256_store_si256(reinterpret_cast<__m256i*>(buffer.data()), value);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result += buffer[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of hadd for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
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
               _mm256_store_si256(reinterpret_cast<__m256i*>(buffer.data()), value);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result += buffer[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of hadd for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
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
               _mm256_store_si256(reinterpret_cast<__m256i*>(buffer.data()), value);
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result += buffer[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of hadd for avx2 using int16_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_AVX2_HPP