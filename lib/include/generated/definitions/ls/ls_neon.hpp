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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/ls/ls_neon.hpp
 * \date 2022-09-29
 * \brief Load/Store primitives
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : dced20e (dced20e02fd365f0df93721f53d70e87bfe5cab2)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : be13979 (be139799c677e3ddb66ae930c197c81312c29456)
 *
 */

#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_LS_LS_NEON_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_LS_LS_NEON_HPP

#include "../../declarations/ls.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return vld1q_s64(memory);
            }
         };
   } // end of namespace functors for template specialization of load for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return vld1q_u8(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return vld1q_u16(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return vld1q_u32(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return vld1q_u64(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return vld1q_s8(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return vld1q_s16(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return vld1q_s32(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return vld1q_s64(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return vld1q_f32(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return vld1q_f64(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               vst1q_s64(memory, data);
            }
         };
   } // end of namespace functors for template specialization of store for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               vst1q_s64(memory, data);
            }
         };
   } // end of namespace functors for template specialization of storeu for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return vdupq_n_u8( value );
            }
         };
   } // end of namespace functors for template specialization of set1 for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return vdupq_n_u16( value );
            }
         };
   } // end of namespace functors for template specialization of set1 for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return vdupq_n_u32( value );
            }
         };
   } // end of namespace functors for template specialization of set1 for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return vdupq_n_u64( value );
            }
         };
   } // end of namespace functors for template specialization of set1 for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return vdupq_n_s8( value );
            }
         };
   } // end of namespace functors for template specialization of set1 for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return vdupq_n_s16( value );
            }
         };
   } // end of namespace functors for template specialization of set1 for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return vdupq_n_s32( value );
            }
         };
   } // end of namespace functors for template specialization of set1 for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return vdupq_n_s64( value );
            }
         };
   } // end of namespace functors for template specialization of set1 for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return vdupq_n_f32( value );
            }
         };
   } // end of namespace functors for template specialization of set1 for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return vdupq_n_f64( value );
            }
         };
   } // end of namespace functors for template specialization of set1 for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );
               auto tmp = vdupq_n_s64( ( mask[ 0 ] == 0 ) ? source[ 0 ] : memory[ index[ 0 ][ 0 ] ] );
            return vsetq_lane_s64( ( ( mask[ 1 ] == 0 ) ? source[ 1 ] : memory[ index[ 0 ][ 1 ] ] ), tmp, 1 );
            }
         };
   } // end of namespace functors for template specialization of gather for neon using int64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_LS_LS_NEON_HPP