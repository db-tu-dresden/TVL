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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/generated/extensions/simt/cuda.hpp
 * \date 2022-08-22
 * \brief Definition of the SIMD TargetExtension for CUDA.
 * \note
 * Git-Local Url : /home/runner/work/TVLGen/TVLGen/generator
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : e9cc2e5 (e9cc2e518e4d952f3254077a2642ac9c95e47dcc)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : 1e8135e (1e8135e36797c1a05bca927343985b30550ae4bf)
 *
 */
#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_EXTENSIONS_SIMT_CUDA_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_EXTENSIONS_SIMT_CUDA_HPP

#include <cstddef>
#include <cstdint>
#include <type_traits>
#include <utility>
#include <memory>
#include <variant>
namespace tvl {
   struct cuda {
      template<TVLArithmetic BaseType, std::size_t VectorSizeInBits = 128>
         struct cuda_register_type {
            using vector_size_in_bytes_t = std::integral_constant<std::size_t, (VectorSizeInBits<<3)>;
            static inline constexpr std::size_t vector_size_in_bytes_v = vector_size_in_bytes_t::value;
            using vector_element_count_t = std::integral_constant<std::size_t, vector_size_in_bytes_v/sizeof(BaseType)>;
            static inline constexpr std::size_t vector_element_count_v = vector_element_count_t::value;
            std::variant<std::shared_ptr<BaseType>, BaseType *> data;
            cuda_register_type(void)
            : data{std::shared_ptr<BaseType>(reinterpret_cast<BaseType*>(malloc(vector_size_in_bytes_v)), [](void* p){ free(p); })}{}
            explicit cuda_register_type(BaseType * ptr)
            : data{ptr}{}
            cuda_register_type(cuda_register_type const & other)
            : data{other.data}{}
            cuda_register_type(cuda_register_type && other)
            : data{std::exchange(other.data, nullptr)}{}
            cuda_register_type & operator=(cuda_register_type const & other) {
               if(this != &other) {
                   data = other.data;
               }
               return *this;
            }
            cuda_register_type & operator=(cuda_register_type && other) {
               if(this != &other) {
                   data = std::exchange(other.data, nullptr);
               }
               return *this;
            }
            ~cuda_register_type(void) {}
            auto operator*() {
               if(std::holds_alternative<BaseType*>(data)) {
                   return std::get<BaseType*>(data);
               } else {
                   return (std::get<std::shared_ptr<BaseType>>(data)).get();
               }
            }

         };
      template<TVLArithmetic BaseType, std::size_t VectorSizeInBits = 128>
         struct types {
            using default_size_in_bits = std::integral_constant<std::size_t, VectorSizeInBits>;
            using register_t  =
               cuda_register_type<BaseType, VectorSizeInBits>;;
            using mask_t =
               register_t;
            using imask_t =
               mask_t;
         };
   };
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_GENERATED_EXTENSIONS_SIMT_CUDA_HPP