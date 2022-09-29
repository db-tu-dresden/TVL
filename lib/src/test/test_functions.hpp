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
 * \file /home/runner/work/TVLGen/TVLGen/lib/src/test/test_functions.hpp
 * \date 2022-09-29
 * \brief TODO.
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

#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_SRC_TEST_TEST_FUNCTIONS_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_SRC_TEST_TEST_FUNCTIONS_HPP

#include <random>
#include <chrono>
#include <cstdint>
#include <cstddef>
#include <cstdlib>
#include <functional>
#include <algorithm>
#include <utility>
namespace tvl {
namespace testing {
   template<typename T>
      void rnd_init(T* data, std::size_t element_count) {
         std::mt19937 engine(std::chrono::high_resolution_clock::now().time_since_epoch().count());
         using dist_type = std::conditional_t< std::is_floating_point_v<T>, std::uniform_real_distribution<T>, std::uniform_int_distribution<T>>;
         T max = std::clamp<T>(
                           static_cast<T>(1000),
                           static_cast<T>(0),
                           static_cast<T>(std::numeric_limits<T>::max() / 3)
                        );
         dist_type dist(static_cast<T>(0), max);
         for(std::size_t i = 0; i < element_count; ++i) {
            data[i] = dist(engine);
         }
      }

   template<typename T>
      bool check_value(T base, T to_be_examined) {
         if constexpr(std::is_integral_v<T>) {
            if constexpr(std::is_unsigned_v<T>) {
               if(base >= to_be_examined) {
                  return ((base - to_be_examined) == std::numeric_limits<T>::epsilon());
               } else {
                  return ((to_be_examined - base) == std::numeric_limits<T>::epsilon());
               }
            } else {
               return (std::abs(static_cast<T>(base - to_be_examined)) == std::numeric_limits<T>::epsilon());
            }
         } else {
            return (std::fabs(static_cast<T>(base - to_be_examined)) <= std::numeric_limits<T>::epsilon());
         }
      }

   template<VectorProcessingStyle Vec>
      class set_call_helper_t {
         private:
            template<std::size_t... Is>
            static auto call_set_impl(typename Vec::base_type const * data, std::index_sequence<Is...>) {
               return tvl::set<Vec>(data[(Vec::vector_element_count()-1)-Is]...);
            }
         public:
            static auto call_set(typename Vec::base_type const * data) {
               return call_set_impl(data, std::make_index_sequence<Vec::vector_element_count()>{});
            }
      };

   template<VectorProcessingStyle Vec>
      class test_memory_helper_t {
         public:
            using base_t = typename Vec::base_type;
         private:
            std::size_t const m_data_element_count;
            std::size_t const m_result_count;
            base_t * const m_data_ref;
            base_t * const m_data_target;
            base_t * const m_result_ref;
            base_t * const m_result_target_for_ref;
            base_t * const m_result_target;
         public:
            explicit test_memory_helper_t(std::size_t p_result_count, bool aligned):
               m_data_element_count   {0},
               m_result_count         {p_result_count},
               m_data_ref             {nullptr},
               m_data_target          {nullptr},
               m_result_ref           {tvl::allocate<tvl::simd<base_t, tvl::scalar>>(p_result_count*sizeof(base_t))},
               m_result_target_for_ref{tvl::allocate<tvl::simd<base_t, tvl::scalar>>(p_result_count*sizeof(base_t))},
               m_result_target        {(aligned) ? tvl::allocate_aligned<Vec>(p_result_count*sizeof(base_t), Vec::vector_alignment()) : tvl::allocate<Vec>(p_result_count*sizeof(base_t))}
            { 
               
             }
            test_memory_helper_t(std::size_t p_data_element_count, std::size_t p_result_count, bool aligned, std::function<void(base_t*,std::size_t)> const & fun = rnd_init<base_t>):
               m_data_element_count   {p_data_element_count},
               m_result_count         {p_result_count},
               m_data_ref             {tvl::allocate<tvl::simd<base_t, tvl::scalar>>(p_data_element_count*sizeof(base_t))},
               m_data_target          {(aligned) ? tvl::allocate_aligned<Vec>(p_data_element_count*sizeof(base_t), Vec::vector_alignment()) : tvl::allocate<Vec>(p_data_element_count*sizeof(base_t))},
               m_result_ref           {tvl::allocate<tvl::simd<base_t, tvl::scalar>>(p_result_count*sizeof(base_t))},
               m_result_target_for_ref{tvl::allocate<tvl::simd<base_t, tvl::scalar>>(p_result_count*sizeof(base_t))},
               m_result_target        {(aligned) ? tvl::allocate_aligned<Vec>(p_result_count*sizeof(base_t), Vec::vector_alignment()) : tvl::allocate<Vec>(p_result_count*sizeof(base_t))}
            {
               fun(m_data_ref, p_data_element_count);
               tvl::memory_cp<Vec>(m_data_target, m_data_ref, p_data_element_count*sizeof(base_t), 1);
            }
            virtual ~test_memory_helper_t() {
               tvl::deallocate<Vec>(m_result_target);
               tvl::deallocate<tvl::simd<base_t, tvl::scalar>>(m_result_target_for_ref);
               tvl::deallocate<tvl::simd<base_t, tvl::scalar>>(m_result_ref);
               if(m_data_element_count > 0) {
                  tvl::deallocate<Vec>(m_data_target);
                  tvl::deallocate<tvl::simd<base_t, tvl::scalar>>(m_data_ref);
               }
            }
         public:
            auto data_ref() const { return m_data_ref; }
            auto data_target() const { return m_data_target; }
            auto result_ref() { return m_result_ref; }
            auto result_target() { return m_result_target; }
         public:
            void synchronize() {
               tvl::memory_cp<Vec>(m_result_target_for_ref, m_result_target, m_result_count*sizeof(base_t), 2);
            }
            bool validate() const {
               bool result = true;
               for(auto i = 0; i < m_result_count; ++i) {
                  result &= check_value<base_t>(m_result_ref[i], m_result_target_for_ref[i]);
               }
               return result;
            }
            bool validate_simd_register(typename Vec::register_type reg) const {
               auto tmp_target_buf = tvl::allocate_aligned<Vec>(Vec::vector_size_B(), Vec::vector_alignment());
               auto tmp_reference_buf = tvl::allocate<tvl::simd<base_t, tvl::scalar>>(Vec::vector_size_B());
               if constexpr(Vec::register_type_is_pointer_v) {
                  tvl::memory_cp<Vec>(tmp_target_buf, reinterpret_cast<typename Vec::base_type const *>(reg), Vec::vector_size_B(), 3);
               } else {
                  tvl::memory_cp<Vec>(tmp_target_buf, reinterpret_cast<typename Vec::base_type const *>(&reg), Vec::vector_size_B(), 3);
               }
               tvl::memory_cp<Vec>(tmp_reference_buf, tmp_target_buf, Vec::vector_size_B(), 2);
               bool result = true;
               for(auto i = 0; i < Vec::vector_element_count(); ++i) {
                  result &= check_value<base_t>(tmp_reference_buf[i], m_result_ref[i]);
               }
               tvl::deallocate<tvl::simd<base_t, tvl::scalar>>(tmp_reference_buf);
               tvl::deallocate<Vec>(tmp_target_buf);
               return result;
            }
      };

} // end of namespace testing
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_SRC_TEST_TEST_FUNCTIONS_HPP