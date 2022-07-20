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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/compare/compare_neon.hpp
 * \date 2022-07-20
 * \brief Compare primitives.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : 6e0d9db (6e0d9db4a214b4db8eedbf84c806d01f3372705d)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : 1e8135e (1e8135e36797c1a05bca927343985b30550ae4bf)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_NEON_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_NEON_HPP

#include "../../declarations/compare.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return vceqq_s8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return vceqq_u8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return vceqq_s16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return vceqq_u16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return vceqq_s32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return vceqq_u32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return vceqq_s64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return vceqq_u64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return vceqq_f32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal".
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               return vceqq_f64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "between_inclusive".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct between_inclusive<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
               typename Vec::register_type vec_data, typename Vec::register_type vec_min, typename Vec::register_type vec_max
            ) {
               return vandq_u64( vcgeq_s64( vec_data, vec_min ), vcleq_s64( vec_data, vec_max ) );
            }
         };
   } // end of namespace functors for template specialization of between_inclusive for neon using int64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_NEON_HPP