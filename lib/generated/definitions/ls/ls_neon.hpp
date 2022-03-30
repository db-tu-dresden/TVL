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
 * @file lib/generated/definitions/ls/ls_neon.hpp
 * @date 30.03.2022
 * @brief Load/Store primitives. Implementation for neon
 */
#ifndef TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_LS_LS_NEON_HPP
#define TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_LS_LS_NEON_HPP

#include "../../declarations/ls.hpp"
namespace tvl {
   namespace details {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_impl<simd<int64_t, neon>, Idof> {
            using Vec = simd< int64_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return vld1q_s64( memory );
            }
         };
   } // end of namespace details for template specialization of load_impl for neon using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu_impl<simd<int64_t, neon>, Idof> {
            using Vec = simd< int64_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type const *  memory
            ) {
               return vld1q_s64( memory );
            }
         };
   } // end of namespace details for template specialization of loadu_impl for neon using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1_impl<simd<int64_t, neon>, Idof> {
            using Vec = simd< int64_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::base_type  value
            ) {
               return vdupq_n_s64( value );
            }
         };
   } // end of namespace details for template specialization of set1_impl for neon using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather_impl<simd<int64_t, neon>, Idof> {
            using Vec = simd< int64_t, neon  >;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  source, typename Vec::base_type const *  memory, typename Vec::register_type  index, typename Vec::mask_type  mask
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );
               auto tmp = vdupq_n_s64( ( mask[ 0 ] == 0 ) ? source[ 0 ] : memory[ index[ 0 ] ] );
            return vsetq_lane_s64( ( ( mask[ 1 ] == 0 ) ? source[ 1 ] : memory[ index[ 1 ] ] ), tmp, 1 );
            }
         };
   } // end of namespace details for template specialization of gather_impl for neon using int64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_LS_LS_NEON_HPP