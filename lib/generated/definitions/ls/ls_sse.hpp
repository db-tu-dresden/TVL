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
 * @file lib/generated/definitions/ls/ls_sse.hpp
 * @date 30.03.2022
 * @brief Load/Store primitives. Implementation for sse
 */
#ifndef TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_LS_LS_SSE_HPP
#define TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_LS_LS_SSE_HPP

#include "../../declarations/ls.hpp"
namespace tvl {
   namespace details {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_impl<simd<uint8_t, sse>, Idof> {
            using Vec = simd< uint8_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_load_si128( reinterpret_cast< __m128i const * >( memory ) );
            }
         };
   } // end of namespace details for template specialization of load_impl for sse using uint8_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_impl<simd<uint16_t, sse>, Idof> {
            using Vec = simd< uint16_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_load_si128( reinterpret_cast< __m128i const * >( memory ) );
            }
         };
   } // end of namespace details for template specialization of load_impl for sse using uint16_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_impl<simd<uint32_t, sse>, Idof> {
            using Vec = simd< uint32_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_load_si128( reinterpret_cast< __m128i const * >( memory ) );
            }
         };
   } // end of namespace details for template specialization of load_impl for sse using uint32_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_impl<simd<uint64_t, sse>, Idof> {
            using Vec = simd< uint64_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_load_si128( reinterpret_cast< __m128i const * >( memory ) );
            }
         };
   } // end of namespace details for template specialization of load_impl for sse using uint64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_impl<simd<int8_t, sse>, Idof> {
            using Vec = simd< int8_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_load_si128( reinterpret_cast< __m128i const * >( memory ) );
            }
         };
   } // end of namespace details for template specialization of load_impl for sse using int8_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_impl<simd<int16_t, sse>, Idof> {
            using Vec = simd< int16_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_load_si128( reinterpret_cast< __m128i const * >( memory ) );
            }
         };
   } // end of namespace details for template specialization of load_impl for sse using int16_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_impl<simd<int32_t, sse>, Idof> {
            using Vec = simd< int32_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_load_si128( reinterpret_cast< __m128i const * >( memory ) );
            }
         };
   } // end of namespace details for template specialization of load_impl for sse using int32_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_impl<simd<int64_t, sse>, Idof> {
            using Vec = simd< int64_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_load_si128( reinterpret_cast< __m128i const * >( memory ) );
            }
         };
   } // end of namespace details for template specialization of load_impl for sse using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_impl<simd<float, sse>, Idof> {
            using Vec = simd< float, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_load_ps(memory);
            }
         };
   } // end of namespace details for template specialization of load_impl for sse using float.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_impl<simd<double, sse>, Idof> {
            using Vec = simd< double, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_load_pd(memory);
            }
         };
   } // end of namespace details for template specialization of load_impl for sse using double.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu_impl<simd<int64_t, sse>, Idof> {
            using Vec = simd< int64_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_loadu_si128( reinterpret_cast< __m128i const * >( memory ) );
            }
         };
   } // end of namespace details for template specialization of loadu_impl for sse using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu_impl<simd<float, sse>, Idof> {
            using Vec = simd< float, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_loadu_ps(memory);
            }
         };
   } // end of namespace details for template specialization of loadu_impl for sse using float.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu_impl<simd<double, sse>, Idof> {
            using Vec = simd< double, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return _mm_loadu_pd(memory);
            }
         };
   } // end of namespace details for template specialization of loadu_impl for sse using double.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1_impl<simd<uint8_t, sse>, Idof> {
            using Vec = simd< uint8_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type  value
            ) {
               return _mm_set1_epi8(value);
            }
         };
   } // end of namespace details for template specialization of set1_impl for sse using uint8_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1_impl<simd<uint16_t, sse>, Idof> {
            using Vec = simd< uint16_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type  value
            ) {
               return _mm_set1_epi16(value);
            }
         };
   } // end of namespace details for template specialization of set1_impl for sse using uint16_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1_impl<simd<uint32_t, sse>, Idof> {
            using Vec = simd< uint32_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type  value
            ) {
               return _mm_set1_epi32(value);
            }
         };
   } // end of namespace details for template specialization of set1_impl for sse using uint32_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1_impl<simd<int8_t, sse>, Idof> {
            using Vec = simd< int8_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type  value
            ) {
               return _mm_set1_epi8(value);
            }
         };
   } // end of namespace details for template specialization of set1_impl for sse using int8_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1_impl<simd<int16_t, sse>, Idof> {
            using Vec = simd< int16_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type  value
            ) {
               return _mm_set1_epi16(value);
            }
         };
   } // end of namespace details for template specialization of set1_impl for sse using int16_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1_impl<simd<int32_t, sse>, Idof> {
            using Vec = simd< int32_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type  value
            ) {
               return _mm_set1_epi32(value);
            }
         };
   } // end of namespace details for template specialization of set1_impl for sse using int32_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1_impl<simd<uint64_t, sse>, Idof> {
            using Vec = simd< uint64_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type  value
            ) {
               return _mm_set1_epi64x(value);
            }
         };
   } // end of namespace details for template specialization of set1_impl for sse using uint64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1_impl<simd<int64_t, sse>, Idof> {
            using Vec = simd< int64_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type  value
            ) {
               return _mm_set1_epi64x(value);
            }
         };
   } // end of namespace details for template specialization of set1_impl for sse using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1_impl<simd<float, sse>, Idof> {
            using Vec = simd< float, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type  value
            ) {
               return _mm_set1_ps(value);
            }
         };
   } // end of namespace details for template specialization of set1_impl for sse using float.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: sse.
       *        Data Type: double
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1_impl<simd<double, sse>, Idof> {
            using Vec = simd< double, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type  value
            ) {
               return _mm_set1_pd(value);
            }
         };
   } // end of namespace details for template specialization of set1_impl for sse using double.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather_impl<simd<int64_t, sse>, Idof> {
            using Vec = simd< int64_t, sse  >;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  source, typename Vec::base_type const *  memory, typename Vec::register_type  index, typename Vec::mask_type  mask
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );
               return _mm_set_epi64x( ( mask[ 1 ] == 0 ) ? source[ 1 ] : memory[ index[ 1 ] ], ( mask[ 0 ] == 0 ) ? source[ 0 ] : memory[ index[ 0 ] ] );
            }
         };
   } // end of namespace details for template specialization of gather_impl for sse using int64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_LS_LS_SSE_HPP