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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/definitions/calc/calc_cuda.hpp
 * \date 2022-08-25
 * \brief This file contains arithmetic primitives.
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
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_CUDA_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_CUDA_HPP

#include "../../declarations/calc.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: cuda.
       *        Data Type: uint8_t
       *  Extension Flags: ['cuda']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint8_t, cuda, VectorSize>, Idof> {
            using Vec = simd<uint8_t, cuda, VectorSize>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               typename Vec::register_type vec_c;
              size_t element_count = VectorSize / (sizeof(uint8_t) * 8);
              constexpr auto add = +[](uint8_t a, uint8_t b) { return a + b; };
              return launch_elemenwise_op<typename Vec::register_type, add>(vec_a, vec_b, VectorSize);
            }
         };
   } // end of namespace functors for template specialization of add for cuda using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: cuda.
       *        Data Type: uint16_t
       *  Extension Flags: ['cuda']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint16_t, cuda, VectorSize>, Idof> {
            using Vec = simd<uint16_t, cuda, VectorSize>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               typename Vec::register_type vec_c;
              size_t element_count = VectorSize / (sizeof(uint16_t) * 8);
              constexpr auto add = +[](uint16_t a, uint16_t b) { return a + b; };
              return launch_elemenwise_op<typename Vec::register_type, add>(vec_a, vec_b, VectorSize);
            }
         };
   } // end of namespace functors for template specialization of add for cuda using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: cuda.
       *        Data Type: uint32_t
       *  Extension Flags: ['cuda']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint32_t, cuda, VectorSize>, Idof> {
            using Vec = simd<uint32_t, cuda, VectorSize>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               typename Vec::register_type vec_c;
              size_t element_count = VectorSize / (sizeof(uint32_t) * 8);
              constexpr auto add = +[](uint32_t a, uint32_t b) { return a + b; };
              return launch_elemenwise_op<typename Vec::register_type, add>(vec_a, vec_b, VectorSize);
            }
         };
   } // end of namespace functors for template specialization of add for cuda using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: cuda.
       *        Data Type: uint64_t
       *  Extension Flags: ['cuda']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint64_t, cuda, VectorSize>, Idof> {
            using Vec = simd<uint64_t, cuda, VectorSize>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               typename Vec::register_type vec_c;
              size_t element_count = VectorSize / (sizeof(uint64_t) * 8);
              constexpr auto add = +[](uint64_t a, uint64_t b) { return a + b; };
              return launch_elemenwise_op<typename Vec::register_type, add>(vec_a, vec_b, VectorSize);
            }
         };
   } // end of namespace functors for template specialization of add for cuda using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: cuda.
       *        Data Type: int8_t
       *  Extension Flags: ['cuda']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<int8_t, cuda, VectorSize>, Idof> {
            using Vec = simd<int8_t, cuda, VectorSize>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               typename Vec::register_type vec_c;
              size_t element_count = VectorSize / (sizeof(int8_t) * 8);
              constexpr auto add = +[](int8_t a, int8_t b) { return a + b; };
              return launch_elemenwise_op<typename Vec::register_type, add>(vec_a, vec_b, VectorSize);
            }
         };
   } // end of namespace functors for template specialization of add for cuda using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: cuda.
       *        Data Type: int16_t
       *  Extension Flags: ['cuda']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<int16_t, cuda, VectorSize>, Idof> {
            using Vec = simd<int16_t, cuda, VectorSize>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               typename Vec::register_type vec_c;
              size_t element_count = VectorSize / (sizeof(int16_t) * 8);
              constexpr auto add = +[](int16_t a, int16_t b) { return a + b; };
              return launch_elemenwise_op<typename Vec::register_type, add>(vec_a, vec_b, VectorSize);
            }
         };
   } // end of namespace functors for template specialization of add for cuda using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: cuda.
       *        Data Type: int32_t
       *  Extension Flags: ['cuda']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<int32_t, cuda, VectorSize>, Idof> {
            using Vec = simd<int32_t, cuda, VectorSize>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               typename Vec::register_type vec_c;
              size_t element_count = VectorSize / (sizeof(int32_t) * 8);
              constexpr auto add = +[](int32_t a, int32_t b) { return a + b; };
              return launch_elemenwise_op<typename Vec::register_type, add>(vec_a, vec_b, VectorSize);
            }
         };
   } // end of namespace functors for template specialization of add for cuda using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: cuda.
       *        Data Type: int64_t
       *  Extension Flags: ['cuda']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<int64_t, cuda, VectorSize>, Idof> {
            using Vec = simd<int64_t, cuda, VectorSize>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               typename Vec::register_type vec_c;
              size_t element_count = VectorSize / (sizeof(int64_t) * 8);
              constexpr auto add = +[](int64_t a, int64_t b) { return a + b; };
              return launch_elemenwise_op<typename Vec::register_type, add>(vec_a, vec_b, VectorSize);
            }
         };
   } // end of namespace functors for template specialization of add for cuda using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: cuda.
       *        Data Type: float
       *  Extension Flags: ['cuda']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<float, cuda, VectorSize>, Idof> {
            using Vec = simd<float, cuda, VectorSize>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               typename Vec::register_type vec_c;
              size_t element_count = VectorSize / (sizeof(float) * 8);
              constexpr auto add = +[](float a, float b) { return a + b; };
              return launch_elemenwise_op<typename Vec::register_type, add>(vec_a, vec_b, VectorSize);
            }
         };
   } // end of namespace functors for template specialization of add for cuda using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add".
       * @details:
       * Target Extension: cuda.
       *        Data Type: double
       *  Extension Flags: ['cuda']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<double, cuda, VectorSize>, Idof> {
            using Vec = simd<double, cuda, VectorSize>;
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::register_type vec_a, typename Vec::register_type vec_b
            ) {
               typename Vec::register_type vec_c;
              size_t element_count = VectorSize / (sizeof(double) * 8);
              constexpr auto add = +[](double a, double b) { return a + b; };
              return launch_elemenwise_op<typename Vec::register_type, add>(vec_a, vec_b, VectorSize);
            }
         };
   } // end of namespace functors for template specialization of add for cuda using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_CUDA_HPP