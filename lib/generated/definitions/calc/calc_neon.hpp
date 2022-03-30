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
 * @file lib/generated/definitions/calc/calc_neon.hpp
 * @date 30.03.2022
 * @brief Arithmetic primitives. Implementation for neon
 */
#ifndef TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_CALC_CALC_NEON_HPP
#define TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_CALC_CALC_NEON_HPP

#include "../../declarations/calc.hpp"
namespace tvl {
   namespace details {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add_impl<simd<uint8_t, neon>, Idof> {
            using Vec = simd< uint8_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vaddq_u8( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of add_impl for neon using uint8_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add_impl<simd<uint16_t, neon>, Idof> {
            using Vec = simd< uint16_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vaddq_u16( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of add_impl for neon using uint16_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add_impl<simd<uint32_t, neon>, Idof> {
            using Vec = simd< uint32_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vaddq_u32( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of add_impl for neon using uint32_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add_impl<simd<uint64_t, neon>, Idof> {
            using Vec = simd< uint64_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vaddq_u64( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of add_impl for neon using uint64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add_impl<simd<int8_t, neon>, Idof> {
            using Vec = simd< int8_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vaddq_s8( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of add_impl for neon using int8_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add_impl<simd<int16_t, neon>, Idof> {
            using Vec = simd< int16_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vaddq_s16( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of add_impl for neon using int16_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add_impl<simd<int32_t, neon>, Idof> {
            using Vec = simd< int32_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vaddq_s32( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of add_impl for neon using int32_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add_impl<simd<int64_t, neon>, Idof> {
            using Vec = simd< int64_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vaddq_s64( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of add_impl for neon using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add_impl<simd<float, neon>, Idof> {
            using Vec = simd< float, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vaddq_f32( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of add_impl for neon using float.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add_impl<simd<double, neon>, Idof> {
            using Vec = simd< double, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vaddq_f64( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of add_impl for neon using double.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul_impl<simd<uint8_t, neon>, Idof> {
            using Vec = simd< uint8_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vmulq_u8( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of mul_impl for neon using uint8_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul_impl<simd<uint16_t, neon>, Idof> {
            using Vec = simd< uint16_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vmulq_u16( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of mul_impl for neon using uint16_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul_impl<simd<uint32_t, neon>, Idof> {
            using Vec = simd< uint32_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vmulq_u32( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of mul_impl for neon using uint32_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul_impl<simd<int8_t, neon>, Idof> {
            using Vec = simd< int8_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vmulq_s8( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of mul_impl for neon using int8_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul_impl<simd<int16_t, neon>, Idof> {
            using Vec = simd< int16_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vmulq_s16( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of mul_impl for neon using int16_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul_impl<simd<int32_t, neon>, Idof> {
            using Vec = simd< int32_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vmulq_s32( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of mul_impl for neon using int32_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul_impl<simd<float, neon>, Idof> {
            using Vec = simd< float, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vmulq_f32( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of mul_impl for neon using float.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul_impl<simd<double, neon>, Idof> {
            using Vec = simd< double, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               return vmulq_f64( vec_a, vec_b );
            }
         };
   } // end of namespace details for template specialization of mul_impl for neon using double.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul_impl<simd<uint64_t, neon>, Idof> {
            using Vec = simd< uint64_t, neon  >;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );
               //Found this on stackoverflow. This seems like an overkill. Maybe an extract and scalar multiply would do the trick more efficient.
//@todo: benchmark this.
             const auto ac = vmovn_u64(vec_a);
             const auto pr = vmovn_u64(vec_b);
             const auto hi = vmulq_u32(vreinterpretq_u32_u64(vec_b), vrev64q_u32(vreinterpretq_u32_u64(vec_a)));
             return vmlal_u32(vshlq_n_u64(vpaddlq_u32(hi), 32), ac, pr);
            }
         };
   } // end of namespace details for template specialization of mul_impl for neon using uint64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul_impl<simd<int64_t, neon>, Idof> {
            using Vec = simd< int64_t, neon  >;
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               typename Vec::register_type  vec_a, typename Vec::register_type  vec_b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );
               //Found this on stackoverflow. This seems like an overkill. Maybe an extract and scalar multiply would do the trick more efficient.
//@todo: benchmark this.
             const auto ac = vmovn_s64(vec_a);
             const auto pr = vmovn_s64(vec_b);
             const auto hi = vmulq_s32(vreinterpretq_s32_s64(vec_b), vrev64q_s32(vreinterpretq_s32_s64(vec_a)));
             return vmlal_s32(vshlq_n_s64(vpaddlq_s32(hi), 32), ac, pr);
            }
         };
   } // end of namespace details for template specialization of mul_impl for neon using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd_impl<simd<uint8_t, neon>, Idof> {
            using Vec = simd< uint8_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type  value
            ) {
               return vaddvq_u8( value );
            }
         };
   } // end of namespace details for template specialization of hadd_impl for neon using uint8_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd_impl<simd<uint16_t, neon>, Idof> {
            using Vec = simd< uint16_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type  value
            ) {
               return vaddvq_u16( value );
            }
         };
   } // end of namespace details for template specialization of hadd_impl for neon using uint16_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd_impl<simd<uint32_t, neon>, Idof> {
            using Vec = simd< uint32_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type  value
            ) {
               return vaddvq_u32( value );
            }
         };
   } // end of namespace details for template specialization of hadd_impl for neon using uint32_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd_impl<simd<uint64_t, neon>, Idof> {
            using Vec = simd< uint64_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type  value
            ) {
               return vaddvq_u64( value );
            }
         };
   } // end of namespace details for template specialization of hadd_impl for neon using uint64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd_impl<simd<int8_t, neon>, Idof> {
            using Vec = simd< int8_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type  value
            ) {
               return vaddvq_s8( value );
            }
         };
   } // end of namespace details for template specialization of hadd_impl for neon using int8_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd_impl<simd<int16_t, neon>, Idof> {
            using Vec = simd< int16_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type  value
            ) {
               return vaddvq_s16( value );
            }
         };
   } // end of namespace details for template specialization of hadd_impl for neon using int16_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd_impl<simd<int32_t, neon>, Idof> {
            using Vec = simd< int32_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type  value
            ) {
               return vaddvq_s32( value );
            }
         };
   } // end of namespace details for template specialization of hadd_impl for neon using int32_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd_impl<simd<int64_t, neon>, Idof> {
            using Vec = simd< int64_t, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type  value
            ) {
               return vaddvq_s64( value );
            }
         };
   } // end of namespace details for template specialization of hadd_impl for neon using int64_t.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd_impl<simd<float, neon>, Idof> {
            using Vec = simd< float, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type  value
            ) {
               return vaddvq_f32( value );
            }
         };
   } // end of namespace details for template specialization of hadd_impl for neon using float.
   namespace details {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd_impl<simd<double, neon>, Idof> {
            using Vec = simd< double, neon  >;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
               typename Vec::register_type  value
            ) {
               return vaddvq_f64( value );
            }
         };
   } // end of namespace details for template specialization of hadd_impl for neon using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_LIB_GENERATED_DEFINITIONS_CALC_CALC_NEON_HPP