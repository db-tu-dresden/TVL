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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/calc/calc_scalar.hpp
 * \date 2022-11-11
 * \brief This file contains arithmetic primitives.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : 1ac1135 (1ac11352efd6d9d52816eed86ba5d99af6879f89)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : be13979 (be139799c677e3ddb66ae930c197c81312c29456)
 *
 */

#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_SCALAR_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_SCALAR_HPP

#include "../../declarations/calc.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a + vec_b;
            }
         };
   } // end of namespace functors for template specialization of add for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a + vec_b;
            }
         };
   } // end of namespace functors for template specialization of add for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a + vec_b;
            }
         };
   } // end of namespace functors for template specialization of add for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a + vec_b;
            }
         };
   } // end of namespace functors for template specialization of add for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a + vec_b;
            }
         };
   } // end of namespace functors for template specialization of add for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a + vec_b;
            }
         };
   } // end of namespace functors for template specialization of add for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a + vec_b;
            }
         };
   } // end of namespace functors for template specialization of add for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a + vec_b;
            }
         };
   } // end of namespace functors for template specialization of add for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a + vec_b;
            }
         };
   } // end of namespace functors for template specialization of add for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct add<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a + vec_b;
            }
         };
   } // end of namespace functors for template specialization of add for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a * vec_b;
            }
         };
   } // end of namespace functors for template specialization of mul for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a * vec_b;
            }
         };
   } // end of namespace functors for template specialization of mul for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a * vec_b;
            }
         };
   } // end of namespace functors for template specialization of mul for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a * vec_b;
            }
         };
   } // end of namespace functors for template specialization of mul for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a * vec_b;
            }
         };
   } // end of namespace functors for template specialization of mul for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a * vec_b;
            }
         };
   } // end of namespace functors for template specialization of mul for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a * vec_b;
            }
         };
   } // end of namespace functors for template specialization of mul for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a * vec_b;
            }
         };
   } // end of namespace functors for template specialization of mul for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a * vec_b;
            }
         };
   } // end of namespace functors for template specialization of mul for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mul".
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mul<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {

               return vec_a * vec_b;
            }
         };
   } // end of namespace functors for template specialization of mul for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                typename Vec::register_type value
            ) {

               return value;
            }
         };
   } // end of namespace functors for template specialization of hadd for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                typename Vec::register_type value
            ) {

               return value;
            }
         };
   } // end of namespace functors for template specialization of hadd for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                typename Vec::register_type value
            ) {

               return value;
            }
         };
   } // end of namespace functors for template specialization of hadd for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                typename Vec::register_type value
            ) {

               return value;
            }
         };
   } // end of namespace functors for template specialization of hadd for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                typename Vec::register_type value
            ) {

               return value;
            }
         };
   } // end of namespace functors for template specialization of hadd for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                typename Vec::register_type value
            ) {

               return value;
            }
         };
   } // end of namespace functors for template specialization of hadd for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                typename Vec::register_type value
            ) {

               return value;
            }
         };
   } // end of namespace functors for template specialization of hadd for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                typename Vec::register_type value
            ) {

               return value;
            }
         };
   } // end of namespace functors for template specialization of hadd for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                typename Vec::register_type value
            ) {

               return value;
            }
         };
   } // end of namespace functors for template specialization of hadd for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd".
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                typename Vec::register_type value
            ) {

               return value;
            }
         };
   } // end of namespace functors for template specialization of hadd for scalar using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_SCALAR_HPP