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
 * @file lib/generated/definitions/binary/binary_sse.hpp
 * @date 30.03.2022
 * @brief Bit manipulation primitives. Implementation for sse
 */
#ifndef TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_BINARY_BINARY_SSE_HPP
#define TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_BINARY_BINARY_SSE_HPP

#include "../../declarations/binary.hpp"
namespace tvl {
   namespace details {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and_impl<simd<uint8_t, sse>, Idof> {
            using Vec = simd< uint8_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  a, typename Vec::register_type  b
            ) {
               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace details for template specialization of binary_and_impl for sse using uint8_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and_impl<simd<uint16_t, sse>, Idof> {
            using Vec = simd< uint16_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  a, typename Vec::register_type  b
            ) {
               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace details for template specialization of binary_and_impl for sse using uint16_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and_impl<simd<uint32_t, sse>, Idof> {
            using Vec = simd< uint32_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  a, typename Vec::register_type  b
            ) {
               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace details for template specialization of binary_and_impl for sse using uint32_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: uint64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and_impl<simd<uint64_t, sse>, Idof> {
            using Vec = simd< uint64_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  a, typename Vec::register_type  b
            ) {
               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace details for template specialization of binary_and_impl for sse using uint64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: int8_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and_impl<simd<int8_t, sse>, Idof> {
            using Vec = simd< int8_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  a, typename Vec::register_type  b
            ) {
               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace details for template specialization of binary_and_impl for sse using int8_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: int16_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and_impl<simd<int16_t, sse>, Idof> {
            using Vec = simd< int16_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  a, typename Vec::register_type  b
            ) {
               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace details for template specialization of binary_and_impl for sse using int16_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: int32_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and_impl<simd<int32_t, sse>, Idof> {
            using Vec = simd< int32_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  a, typename Vec::register_type  b
            ) {
               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace details for template specialization of binary_and_impl for sse using int32_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: int64_t
       *  Extension Flags: ['sse2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and_impl<simd<int64_t, sse>, Idof> {
            using Vec = simd< int64_t, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  a, typename Vec::register_type  b
            ) {
               return _mm_and_si128(a, b);
            }
         };
   } // end of namespace details for template specialization of binary_and_impl for sse using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: sse.
       *        Data Type: float
       *  Extension Flags: ['sse']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and_impl<simd<float, sse>, Idof> {
            using Vec = simd< float, sse  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  a, typename Vec::register_type  b
            ) {
               return _mm_and_ps(a, b);
            }
         };
   } // end of namespace details for template specialization of binary_and_impl for sse using float.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_BINARY_BINARY_SSE_HPP