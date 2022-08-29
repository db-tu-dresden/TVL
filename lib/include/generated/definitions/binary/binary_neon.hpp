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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/binary/binary_neon.hpp
 * \date 2022-08-29
 * \brief Bit manipulation primitives.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : c3bb1cc (c3bb1cc4fb2ae9daa751818c70ca8ee915793e3a)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : be13979 (be139799c677e3ddb66ae930c197c81312c29456)
 *
 */

#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_NEON_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_NEON_HPP

#include "../../declarations/binary.hpp"
namespace tvl {
   
namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint8_t, neon>
, Idof> {
            using Vec = simd<uint8_t, neon>
;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {
               return vandq_u8( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using uint8_t.
   
namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint16_t, neon>
, Idof> {
            using Vec = simd<uint16_t, neon>
;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {
               return vandq_u16( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using uint16_t.
   
namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint32_t, neon>
, Idof> {
            using Vec = simd<uint32_t, neon>
;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {
               return vandq_u32( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using uint32_t.
   
namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint64_t, neon>
, Idof> {
            using Vec = simd<uint64_t, neon>
;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {
               return vandq_u64( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using uint64_t.
   
namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int8_t, neon>
, Idof> {
            using Vec = simd<int8_t, neon>
;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {
               return vandq_s8( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using int8_t.
   
namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int16_t, neon>
, Idof> {
            using Vec = simd<int16_t, neon>
;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {
               return vandq_s16( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using int16_t.
   
namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int32_t, neon>
, Idof> {
            using Vec = simd<int32_t, neon>
;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {
               return vandq_s32( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using int32_t.
   
namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int64_t, neon>
, Idof> {
            using Vec = simd<int64_t, neon>
;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {
               return vandq_s64( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using int64_t.
   
namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<float, neon>
, Idof> {
            using Vec = simd<float, neon>
;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {
               return vreinterpretq_f32_u32(vandq_u32( vreinterpretq_u32_f32(a),vreinterpretq_u32_f32(b)));
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using float.
   
namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and".
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<double, neon>
, Idof> {
            using Vec = simd<double, neon>
;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type a, typename Vec::register_type b
            ) {
               return vreinterpretq_f64_u64(vandq_u64( vreinterpretq_u64_f64(a),vreinterpretq_u64_f64(b)));
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_NEON_HPP