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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/ls/ls_scalar.hpp
 * \date 2022-08-25
 * \brief Load/Store primitives
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : 09e790d (09e790d9cc40c4de3fbe683afe9241a803f25915)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : be13979 (be139799c677e3ddb66ae930c197c81312c29456)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_LS_LS_SCALAR_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_LS_LS_SCALAR_HPP

#include "../../declarations/ls.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of load for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of load for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of load for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of load for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of load for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of load for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of load for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of load for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of load for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load".
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of load for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of loadu for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of loadu for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of loadu for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of loadu for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of loadu for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of loadu for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of loadu for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of loadu for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of loadu for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type const * memory
            ) {
               return *memory;
            }
         };
   } // end of namespace functors for template specialization of loadu for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of store for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of store for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of store for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of store for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of store for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of store for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of store for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of store for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of store for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store".
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of store for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of storeu for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of storeu for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of storeu for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of storeu for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of storeu for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of storeu for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of storeu for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of storeu for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of storeu for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu".
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, typename Vec::register_type data
            ) {
               *memory = data;
            }
         };
   } // end of namespace functors for template specialization of storeu for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return value;
            }
         };
   } // end of namespace functors for template specialization of set1 for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return value;
            }
         };
   } // end of namespace functors for template specialization of set1 for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return value;
            }
         };
   } // end of namespace functors for template specialization of set1 for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return value;
            }
         };
   } // end of namespace functors for template specialization of set1 for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return value;
            }
         };
   } // end of namespace functors for template specialization of set1 for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return value;
            }
         };
   } // end of namespace functors for template specialization of set1 for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return value;
            }
         };
   } // end of namespace functors for template specialization of set1 for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return value;
            }
         };
   } // end of namespace functors for template specialization of set1 for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return value;
            }
         };
   } // end of namespace functors for template specialization of set1 for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1".
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type value
            ) {
               return value;
            }
         };
   } // end of namespace functors for template specialization of set1 for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               return (mask&1)==1 ? memory[index[0]] : source;
            }
         };
   } // end of namespace functors for template specialization of gather for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               return (mask&1)==1 ? memory[index[0]] : source;
            }
         };
   } // end of namespace functors for template specialization of gather for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               return (mask&1)==1 ? memory[index[0]] : source;
            }
         };
   } // end of namespace functors for template specialization of gather for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               return (mask&1)==1 ? memory[index[0]] : source;
            }
         };
   } // end of namespace functors for template specialization of gather for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               return (mask&1)==1 ? memory[index[0]] : source;
            }
         };
   } // end of namespace functors for template specialization of gather for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               return (mask&1)==1 ? memory[index[0]] : source;
            }
         };
   } // end of namespace functors for template specialization of gather for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               return (mask&1)==1 ? memory[index[0]] : source;
            }
         };
   } // end of namespace functors for template specialization of gather for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               return (mask&1)==1 ? memory[index[0]] : source;
            }
         };
   } // end of namespace functors for template specialization of gather for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               return (mask&1)==1 ? memory[index[0]] : source;
            }
         };
   } // end of namespace functors for template specialization of gather for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather".
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct gather<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type source, typename Vec::base_type const * memory, typename Vec::offset_register_type index, typename Vec::mask_type mask
            ) {
               return (mask&1)==1 ? memory[index[0]] : source;
            }
         };
   } // end of namespace functors for template specialization of gather for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return std::get<0>(std::make_tuple(args...));
            }
         };
   } // end of namespace functors for template specialization of set for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return std::get<0>(std::make_tuple(args...));
            }
         };
   } // end of namespace functors for template specialization of set for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return std::get<0>(std::make_tuple(args...));
            }
         };
   } // end of namespace functors for template specialization of set for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return std::get<0>(std::make_tuple(args...));
            }
         };
   } // end of namespace functors for template specialization of set for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return std::get<0>(std::make_tuple(args...));
            }
         };
   } // end of namespace functors for template specialization of set for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return std::get<0>(std::make_tuple(args...));
            }
         };
   } // end of namespace functors for template specialization of set for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return std::get<0>(std::make_tuple(args...));
            }
         };
   } // end of namespace functors for template specialization of set for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return std::get<0>(std::make_tuple(args...));
            }
         };
   } // end of namespace functors for template specialization of set for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return std::get<0>(std::make_tuple(args...));
            }
         };
   } // end of namespace functors for template specialization of set for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set".
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {
               return std::get<0>(std::make_tuple(args...));
            }
         };
   } // end of namespace functors for template specialization of set for scalar using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_LS_LS_SCALAR_HPP