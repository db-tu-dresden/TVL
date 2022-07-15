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
 * \file /home/runner/work/TVLGen/TVLGen/lib/src/test/unit_test.cpp
 * \date 2022-07-15
 * \brief Unit test file for TVL Primitives using Catch2
 * \note
 *
 */
#include <tvlintrin.hpp>
#include <cstddef>
#include <algorithm>
#include <limits>
#include <cstring>
#include "test_functions.hpp"
   
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

namespace tvl {
  template<VectorProcessingStyle Vec>
     bool test_set1_default() {
        using namespace tvl;
        std::size_t element_count = 1024;
      bool allOk = true;
      testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), false};
      const std::size_t limit = std::min((std::size_t) 4096, (std::size_t) std::numeric_limits<typename Vec::base_type>::max());
      auto reference_result_ptr = test_helper.result_ref();
      auto test_result_ptr = test_helper.result_target();
      for(std::size_t i = 0; i < limit; ++i) {
         auto vec = set1<Vec>(i);
         for(std::size_t j = 0; j < Vec::vector_element_count(); j++) {
            reference_result_ptr[j] = i;
         }
         allOk &= test_helper.validate_simd_register(vec);
      }
      const auto maxval = std::numeric_limits<typename Vec::base_type>::max();
      auto max_vec = set1<Vec>(maxval);
      for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
         reference_result_ptr[i] = maxval;
      }
      allOk &= test_helper.validate_simd_register(max_vec);
      return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_hadd_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
      testing::test_memory_helper_t<Vec> test_helper{1, false};
      bool allOk = true;
      auto reference_result_ptr = test_helper.result_ref();
      auto test_result_ptr = test_helper.result_target();
      const std::size_t limit = std::min( (size_t) 4096, (size_t) std::numeric_limits<T>::max() / Vec::vector_element_count() );
      for(std::size_t i = 0; i < limit; ++i) {
         *reference_result_ptr =  Vec::vector_element_count() * i;
         auto vec = set1<Vec>(i);
         *test_result_ptr = hadd<Vec>(vec);
         test_helper.synchronize();
         allOk &= test_helper.validate();
      }
      return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_store_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
      std::size_t element_count = 1024;
      testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), true};
      bool allOk = true;
      auto reference_data_ptr = test_helper.data_ref();
      auto reference_result_ptr = test_helper.result_ref();
      auto test_data_ptr = test_helper.data_target();
      auto test_result_ptr = test_helper.result_target();
      for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
         for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
            reference_result_ptr[j-i] = i;
         }
         auto loaded = set1<Vec>(i);
         store<Vec>(test_result_ptr, loaded);
         test_helper.synchronize();
         allOk &= test_helper.validate();
      }
      return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_storeu_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
      std::size_t element_count = 1024;
      testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), false};
      bool allOk = true;
      auto reference_result_ptr = test_helper.result_ref();
      auto test_result_ptr = test_helper.result_target();
      for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
         for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
            reference_result_ptr[j-i] = i;
         }
         auto loaded = set1<Vec>(i);
         storeu<Vec>(test_result_ptr, loaded);
         test_helper.synchronize();
         allOk &= test_helper.validate();
      }
      return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_load_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
      std::size_t element_count = 1024;
      testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), true};
      bool allOk = true;
      auto reference_data_ptr = test_helper.data_ref();
      auto reference_result_ptr = test_helper.result_ref();
      auto test_data_ptr = test_helper.data_target();
      auto test_result_ptr = test_helper.result_target();
      for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
         for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
            reference_result_ptr[j-i] = reference_data_ptr[j];
         }
         auto loaded = load<Vec>(&test_data_ptr[i]);
         storeu<Vec>(test_result_ptr, loaded);
         test_helper.synchronize();
         allOk &= test_helper.validate();
      }
      return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_loadu_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
      std::size_t element_count = 1024;
      testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
      bool allOk = true;
      auto reference_data_ptr = test_helper.data_ref();
      auto reference_result_ptr = test_helper.result_ref();
      auto test_data_ptr = test_helper.data_target();
      auto test_result_ptr = test_helper.result_target();
      for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
         for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
            reference_result_ptr[j-i] = reference_data_ptr[j];
         }
         auto loaded = loadu<Vec>(&test_data_ptr[i]);
         storeu<Vec>(test_result_ptr, loaded);
         test_helper.synchronize();
         allOk &= test_helper.validate();
      }
      return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_set_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
      std::size_t element_count = 1024;
      testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
      bool allOk = true;
      auto reference_data_ptr = test_helper.data_ref();
      auto reference_result_ptr = test_helper.result_ref();
      auto test_data_ptr = test_helper.data_target();
      auto test_result_ptr = test_helper.result_target();
      for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
         for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
            reference_result_ptr[j-i] = reference_data_ptr[j];
         }
         auto loaded = testing::set_call_helper_t<Vec>::call_set(&test_data_ptr[i]);
         storeu<Vec>(test_result_ptr, loaded);
         test_helper.synchronize();
         allOk &= test_helper.validate();
      }
      return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_add_running_sum_w_epsilon() {
        using namespace tvl;
        using T = typename Vec::base_type;
      std::size_t element_count = 1024;
      testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false };
      bool allOk = true;
      auto reference_data_ptr = test_helper.data_ref();
      auto reference_result_ptr = test_helper.result_ref();
      auto test_data_ptr = test_helper.data_target();
      auto test_result_ptr = test_helper.result_target();
      auto vec = set1<Vec>( 0 );
      for(std::size_t i = 0; i < element_count - 2*Vec::vector_element_count(); i+=2*Vec::vector_element_count()) {
         std::size_t tester_idx = 0;
         for(size_t j = i; j < i + Vec::vector_element_count(); j++) {
            reference_result_ptr[tester_idx++] = reference_data_ptr[j]+reference_data_ptr[j+Vec::vector_element_count()];
         }
         auto elements_vec1 = loadu<Vec>(&test_data_ptr[i]);
         auto elements_vec2 = loadu<Vec>(&test_data_ptr[i+Vec::vector_element_count()]);
         vec = add<Vec>(elements_vec1, elements_vec2);
         storeu<Vec>( test_result_ptr, vec );
         test_helper.synchronize();
         allOk &= test_helper.validate();
      }
      return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_add_zero_cornercase() {
        using namespace tvl;
        using T = typename Vec::base_type;
      std::size_t element_count = 1024;
      testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
      bool allOk = true;
      auto reference_data_ptr = test_helper.data_ref();
      auto reference_result_ptr = test_helper.result_ref();
      auto test_data_ptr = test_helper.data_target();
      auto test_result_ptr = test_helper.result_target();
      for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
         std::size_t tester_idx = 0;
         for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
            reference_result_ptr[tester_idx++] = reference_data_ptr[j];
         }
         auto vec = set1<Vec>( 0 );
         auto elements = loadu<Vec>(&test_data_ptr[i]);
         vec = add<Vec>(vec, elements);
         storeu<Vec>( test_result_ptr, vec );
         test_helper.synchronize();
         allOk &= test_helper.validate();
      }
      return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_mul_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
      std::size_t element_count = 1024;
      testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false };
      bool allOk = true;
      auto reference_data_ptr = test_helper.data_ref();
      auto reference_result_ptr = test_helper.result_ref();
      auto test_data_ptr = test_helper.data_target();
      auto test_result_ptr = test_helper.result_target();
      for(std::size_t i = 0; i < element_count - (2*Vec::vector_element_count()); i+=(2*Vec::vector_element_count())) {
         std::size_t j = i;
         for(; j < i + Vec::vector_element_count(); ++j) {
            reference_result_ptr[j-i] = reference_data_ptr[j];
         }
         for(; j < i + (2*Vec::vector_element_count()); ++j) {
            reference_result_ptr[j-(i+Vec::vector_element_count())] *= reference_data_ptr[j];
         }
         auto vec_a = loadu<Vec>(&test_data_ptr[i]);
         auto vec_b = loadu<Vec>(&test_data_ptr[i+Vec::vector_element_count()]);
         auto vec_result = mul<Vec>(vec_a, vec_b);
         storeu<Vec>(test_result_ptr, vec_result);
         test_helper.synchronize();
         allOk &= test_helper.validate();
      }
      return allOk;

     }
}

TEST_CASE("Testing primitive set1 for avx2", "[set1],[avx2]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_set1_default<simd<double, avx2>>());
      CHECK(test_set1_default<simd<float, avx2>>());
      CHECK(test_set1_default<simd<int16_t, avx2>>());
      CHECK(test_set1_default<simd<int32_t, avx2>>());
      CHECK(test_set1_default<simd<int64_t, avx2>>());
      CHECK(test_set1_default<simd<int8_t, avx2>>());
      CHECK(test_set1_default<simd<uint16_t, avx2>>());
      CHECK(test_set1_default<simd<uint32_t, avx2>>());
      CHECK(test_set1_default<simd<uint64_t, avx2>>());
      CHECK(test_set1_default<simd<uint8_t, avx2>>());
   }
}
TEST_CASE("Testing primitive set1 for avx512", "[set1],[avx512]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_set1_default<simd<double, avx512>>());
      CHECK(test_set1_default<simd<float, avx512>>());
      CHECK(test_set1_default<simd<int16_t, avx512>>());
      CHECK(test_set1_default<simd<int32_t, avx512>>());
      CHECK(test_set1_default<simd<int64_t, avx512>>());
      CHECK(test_set1_default<simd<int8_t, avx512>>());
      CHECK(test_set1_default<simd<uint16_t, avx512>>());
      CHECK(test_set1_default<simd<uint32_t, avx512>>());
      CHECK(test_set1_default<simd<uint64_t, avx512>>());
      CHECK(test_set1_default<simd<uint8_t, avx512>>());
   }
}
TEST_CASE("Testing primitive set1 for cuda", "[set1],[cuda]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive set1 not implementend for cuda");
   }
}
TEST_CASE("Testing primitive set1 for neon", "[set1],[neon]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_set1_default<simd<double, neon>>());
      CHECK(test_set1_default<simd<float, neon>>());
      CHECK(test_set1_default<simd<int16_t, neon>>());
      CHECK(test_set1_default<simd<int32_t, neon>>());
      CHECK(test_set1_default<simd<int64_t, neon>>());
      CHECK(test_set1_default<simd<int8_t, neon>>());
      CHECK(test_set1_default<simd<uint16_t, neon>>());
      CHECK(test_set1_default<simd<uint32_t, neon>>());
      CHECK(test_set1_default<simd<uint64_t, neon>>());
      CHECK(test_set1_default<simd<uint8_t, neon>>());
   }
}
TEST_CASE("Testing primitive set1 for scalar", "[set1],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_set1_default<simd<double, scalar>>());
      CHECK(test_set1_default<simd<float, scalar>>());
      CHECK(test_set1_default<simd<int16_t, scalar>>());
      CHECK(test_set1_default<simd<int32_t, scalar>>());
      CHECK(test_set1_default<simd<int64_t, scalar>>());
      CHECK(test_set1_default<simd<int8_t, scalar>>());
      CHECK(test_set1_default<simd<uint16_t, scalar>>());
      CHECK(test_set1_default<simd<uint32_t, scalar>>());
      CHECK(test_set1_default<simd<uint64_t, scalar>>());
      CHECK(test_set1_default<simd<uint8_t, scalar>>());
   }
}
TEST_CASE("Testing primitive set1 for sse", "[set1],[sse]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_set1_default<simd<double, sse>>());
      CHECK(test_set1_default<simd<float, sse>>());
      CHECK(test_set1_default<simd<int16_t, sse>>());
      CHECK(test_set1_default<simd<int32_t, sse>>());
      CHECK(test_set1_default<simd<int64_t, sse>>());
      CHECK(test_set1_default<simd<int8_t, sse>>());
      CHECK(test_set1_default<simd<uint16_t, sse>>());
      CHECK(test_set1_default<simd<uint32_t, sse>>());
      CHECK(test_set1_default<simd<uint64_t, sse>>());
      CHECK(test_set1_default<simd<uint8_t, sse>>());
   }
}
TEST_CASE("Testing primitive hadd for avx2", "[hadd],[avx2]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_hadd_default<simd<double, avx2>>());
      CHECK(test_hadd_default<simd<float, avx2>>());
      CHECK(test_hadd_default<simd<int16_t, avx2>>());
      CHECK(test_hadd_default<simd<int32_t, avx2>>());
      CHECK(test_hadd_default<simd<int64_t, avx2>>());
      CHECK(test_hadd_default<simd<int8_t, avx2>>());
      CHECK(test_hadd_default<simd<uint16_t, avx2>>());
      CHECK(test_hadd_default<simd<uint32_t, avx2>>());
      CHECK(test_hadd_default<simd<uint64_t, avx2>>());
      CHECK(test_hadd_default<simd<uint8_t, avx2>>());
   }
}
TEST_CASE("Testing primitive hadd for avx512", "[hadd],[avx512]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_hadd_default<simd<double, avx512>>());
      CHECK(test_hadd_default<simd<float, avx512>>());
      CHECK(test_hadd_default<simd<int16_t, avx512>>());
      CHECK(test_hadd_default<simd<int32_t, avx512>>());
      CHECK(test_hadd_default<simd<int64_t, avx512>>());
      CHECK(test_hadd_default<simd<int8_t, avx512>>());
      CHECK(test_hadd_default<simd<uint16_t, avx512>>());
      CHECK(test_hadd_default<simd<uint32_t, avx512>>());
      CHECK(test_hadd_default<simd<uint64_t, avx512>>());
      CHECK(test_hadd_default<simd<uint8_t, avx512>>());
   }
}
TEST_CASE("Testing primitive hadd for cuda", "[hadd],[cuda]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive hadd not implementend for cuda");
   }
}
TEST_CASE("Testing primitive hadd for neon", "[hadd],[neon]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_hadd_default<simd<double, neon>>());
      CHECK(test_hadd_default<simd<float, neon>>());
      CHECK(test_hadd_default<simd<int16_t, neon>>());
      CHECK(test_hadd_default<simd<int32_t, neon>>());
      CHECK(test_hadd_default<simd<int64_t, neon>>());
      CHECK(test_hadd_default<simd<int8_t, neon>>());
      CHECK(test_hadd_default<simd<uint16_t, neon>>());
      CHECK(test_hadd_default<simd<uint32_t, neon>>());
      CHECK(test_hadd_default<simd<uint64_t, neon>>());
      CHECK(test_hadd_default<simd<uint8_t, neon>>());
   }
}
TEST_CASE("Testing primitive hadd for scalar", "[hadd],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_hadd_default<simd<double, scalar>>());
      CHECK(test_hadd_default<simd<float, scalar>>());
      CHECK(test_hadd_default<simd<int16_t, scalar>>());
      CHECK(test_hadd_default<simd<int32_t, scalar>>());
      CHECK(test_hadd_default<simd<int64_t, scalar>>());
      CHECK(test_hadd_default<simd<int8_t, scalar>>());
      CHECK(test_hadd_default<simd<uint16_t, scalar>>());
      CHECK(test_hadd_default<simd<uint32_t, scalar>>());
      CHECK(test_hadd_default<simd<uint64_t, scalar>>());
      CHECK(test_hadd_default<simd<uint8_t, scalar>>());
   }
}
TEST_CASE("Testing primitive hadd for sse", "[hadd],[sse]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_hadd_default<simd<double, sse>>());
      CHECK(test_hadd_default<simd<float, sse>>());
      CHECK(test_hadd_default<simd<int16_t, sse>>());
      CHECK(test_hadd_default<simd<int32_t, sse>>());
      CHECK(test_hadd_default<simd<int64_t, sse>>());
      CHECK(test_hadd_default<simd<int8_t, sse>>());
      CHECK(test_hadd_default<simd<uint16_t, sse>>());
      CHECK(test_hadd_default<simd<uint32_t, sse>>());
      CHECK(test_hadd_default<simd<uint64_t, sse>>());
      CHECK(test_hadd_default<simd<uint8_t, sse>>());
   }
}
TEST_CASE("Testing primitive store for avx2", "[store],[avx2]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_store_default<simd<double, avx2>>());
      CHECK(test_store_default<simd<float, avx2>>());
      CHECK(test_store_default<simd<int16_t, avx2>>());
      CHECK(test_store_default<simd<int32_t, avx2>>());
      CHECK(test_store_default<simd<int64_t, avx2>>());
      CHECK(test_store_default<simd<int8_t, avx2>>());
      CHECK(test_store_default<simd<uint16_t, avx2>>());
      CHECK(test_store_default<simd<uint32_t, avx2>>());
      CHECK(test_store_default<simd<uint64_t, avx2>>());
      CHECK(test_store_default<simd<uint8_t, avx2>>());
   }
}
TEST_CASE("Testing primitive store for avx512", "[store],[avx512]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_store_default<simd<double, avx512>>());
      CHECK(test_store_default<simd<float, avx512>>());
      CHECK(test_store_default<simd<int16_t, avx512>>());
      CHECK(test_store_default<simd<int32_t, avx512>>());
      CHECK(test_store_default<simd<int64_t, avx512>>());
      CHECK(test_store_default<simd<int8_t, avx512>>());
      CHECK(test_store_default<simd<uint16_t, avx512>>());
      CHECK(test_store_default<simd<uint32_t, avx512>>());
      CHECK(test_store_default<simd<uint64_t, avx512>>());
      CHECK(test_store_default<simd<uint8_t, avx512>>());
   }
}
TEST_CASE("Testing primitive store for cuda", "[store],[cuda]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive store not implementend for cuda");
   }
}
TEST_CASE("Testing primitive store for neon", "[store],[neon]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive store<simd<double, neon>> not implementend.");
      WARN("Primitive store<simd<float, neon>> not implementend.");
      WARN("Primitive store<simd<int16_t, neon>> not implementend.");
      WARN("Primitive store<simd<int32_t, neon>> not implementend.");
      CHECK(test_store_default<simd<int64_t, neon>>());
      WARN("Primitive store<simd<int8_t, neon>> not implementend.");
      WARN("Primitive store<simd<uint16_t, neon>> not implementend.");
      WARN("Primitive store<simd<uint32_t, neon>> not implementend.");
      WARN("Primitive store<simd<uint64_t, neon>> not implementend.");
      WARN("Primitive store<simd<uint8_t, neon>> not implementend.");
   }
}
TEST_CASE("Testing primitive store for scalar", "[store],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_store_default<simd<double, scalar>>());
      CHECK(test_store_default<simd<float, scalar>>());
      CHECK(test_store_default<simd<int16_t, scalar>>());
      CHECK(test_store_default<simd<int32_t, scalar>>());
      CHECK(test_store_default<simd<int64_t, scalar>>());
      CHECK(test_store_default<simd<int8_t, scalar>>());
      CHECK(test_store_default<simd<uint16_t, scalar>>());
      CHECK(test_store_default<simd<uint32_t, scalar>>());
      CHECK(test_store_default<simd<uint64_t, scalar>>());
      CHECK(test_store_default<simd<uint8_t, scalar>>());
   }
}
TEST_CASE("Testing primitive store for sse", "[store],[sse]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_store_default<simd<double, sse>>());
      CHECK(test_store_default<simd<float, sse>>());
      CHECK(test_store_default<simd<int16_t, sse>>());
      CHECK(test_store_default<simd<int32_t, sse>>());
      CHECK(test_store_default<simd<int64_t, sse>>());
      CHECK(test_store_default<simd<int8_t, sse>>());
      CHECK(test_store_default<simd<uint16_t, sse>>());
      CHECK(test_store_default<simd<uint32_t, sse>>());
      CHECK(test_store_default<simd<uint64_t, sse>>());
      CHECK(test_store_default<simd<uint8_t, sse>>());
   }
}
TEST_CASE("Testing primitive storeu for avx2", "[storeu],[avx2]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_storeu_default<simd<double, avx2>>());
      CHECK(test_storeu_default<simd<float, avx2>>());
      CHECK(test_storeu_default<simd<int16_t, avx2>>());
      CHECK(test_storeu_default<simd<int32_t, avx2>>());
      CHECK(test_storeu_default<simd<int64_t, avx2>>());
      CHECK(test_storeu_default<simd<int8_t, avx2>>());
      CHECK(test_storeu_default<simd<uint16_t, avx2>>());
      CHECK(test_storeu_default<simd<uint32_t, avx2>>());
      CHECK(test_storeu_default<simd<uint64_t, avx2>>());
      CHECK(test_storeu_default<simd<uint8_t, avx2>>());
   }
}
TEST_CASE("Testing primitive storeu for avx512", "[storeu],[avx512]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_storeu_default<simd<double, avx512>>());
      CHECK(test_storeu_default<simd<float, avx512>>());
      CHECK(test_storeu_default<simd<int16_t, avx512>>());
      CHECK(test_storeu_default<simd<int32_t, avx512>>());
      CHECK(test_storeu_default<simd<int64_t, avx512>>());
      CHECK(test_storeu_default<simd<int8_t, avx512>>());
      CHECK(test_storeu_default<simd<uint16_t, avx512>>());
      CHECK(test_storeu_default<simd<uint32_t, avx512>>());
      CHECK(test_storeu_default<simd<uint64_t, avx512>>());
      CHECK(test_storeu_default<simd<uint8_t, avx512>>());
   }
}
TEST_CASE("Testing primitive storeu for cuda", "[storeu],[cuda]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive storeu not implementend for cuda");
   }
}
TEST_CASE("Testing primitive storeu for neon", "[storeu],[neon]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive storeu<simd<double, neon>> not implementend.");
      WARN("Primitive storeu<simd<float, neon>> not implementend.");
      WARN("Primitive storeu<simd<int16_t, neon>> not implementend.");
      WARN("Primitive storeu<simd<int32_t, neon>> not implementend.");
      CHECK(test_storeu_default<simd<int64_t, neon>>());
      WARN("Primitive storeu<simd<int8_t, neon>> not implementend.");
      WARN("Primitive storeu<simd<uint16_t, neon>> not implementend.");
      WARN("Primitive storeu<simd<uint32_t, neon>> not implementend.");
      WARN("Primitive storeu<simd<uint64_t, neon>> not implementend.");
      WARN("Primitive storeu<simd<uint8_t, neon>> not implementend.");
   }
}
TEST_CASE("Testing primitive storeu for scalar", "[storeu],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_storeu_default<simd<double, scalar>>());
      CHECK(test_storeu_default<simd<float, scalar>>());
      CHECK(test_storeu_default<simd<int16_t, scalar>>());
      CHECK(test_storeu_default<simd<int32_t, scalar>>());
      CHECK(test_storeu_default<simd<int64_t, scalar>>());
      CHECK(test_storeu_default<simd<int8_t, scalar>>());
      CHECK(test_storeu_default<simd<uint16_t, scalar>>());
      CHECK(test_storeu_default<simd<uint32_t, scalar>>());
      CHECK(test_storeu_default<simd<uint64_t, scalar>>());
      CHECK(test_storeu_default<simd<uint8_t, scalar>>());
   }
}
TEST_CASE("Testing primitive storeu for sse", "[storeu],[sse]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_storeu_default<simd<double, sse>>());
      CHECK(test_storeu_default<simd<float, sse>>());
      CHECK(test_storeu_default<simd<int16_t, sse>>());
      CHECK(test_storeu_default<simd<int32_t, sse>>());
      CHECK(test_storeu_default<simd<int64_t, sse>>());
      CHECK(test_storeu_default<simd<int8_t, sse>>());
      CHECK(test_storeu_default<simd<uint16_t, sse>>());
      CHECK(test_storeu_default<simd<uint32_t, sse>>());
      CHECK(test_storeu_default<simd<uint64_t, sse>>());
      CHECK(test_storeu_default<simd<uint8_t, sse>>());
   }
}
TEST_CASE("Testing primitive load for avx2", "[load],[avx2]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_load_default<simd<double, avx2>>());
      CHECK(test_load_default<simd<float, avx2>>());
      CHECK(test_load_default<simd<int16_t, avx2>>());
      CHECK(test_load_default<simd<int32_t, avx2>>());
      CHECK(test_load_default<simd<int64_t, avx2>>());
      CHECK(test_load_default<simd<int8_t, avx2>>());
      CHECK(test_load_default<simd<uint16_t, avx2>>());
      CHECK(test_load_default<simd<uint32_t, avx2>>());
      CHECK(test_load_default<simd<uint64_t, avx2>>());
      CHECK(test_load_default<simd<uint8_t, avx2>>());
   }
}
TEST_CASE("Testing primitive load for avx512", "[load],[avx512]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_load_default<simd<double, avx512>>());
      CHECK(test_load_default<simd<float, avx512>>());
      CHECK(test_load_default<simd<int16_t, avx512>>());
      CHECK(test_load_default<simd<int32_t, avx512>>());
      CHECK(test_load_default<simd<int64_t, avx512>>());
      CHECK(test_load_default<simd<int8_t, avx512>>());
      CHECK(test_load_default<simd<uint16_t, avx512>>());
      CHECK(test_load_default<simd<uint32_t, avx512>>());
      CHECK(test_load_default<simd<uint64_t, avx512>>());
      CHECK(test_load_default<simd<uint8_t, avx512>>());
   }
}
TEST_CASE("Testing primitive load for cuda", "[load],[cuda]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive load not implementend for cuda");
   }
}
TEST_CASE("Testing primitive load for neon", "[load],[neon]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive load<simd<double, neon>> not implementend.");
      WARN("Primitive load<simd<float, neon>> not implementend.");
      WARN("Primitive load<simd<int16_t, neon>> not implementend.");
      WARN("Primitive load<simd<int32_t, neon>> not implementend.");
      CHECK(test_load_default<simd<int64_t, neon>>());
      WARN("Primitive load<simd<int8_t, neon>> not implementend.");
      WARN("Primitive load<simd<uint16_t, neon>> not implementend.");
      WARN("Primitive load<simd<uint32_t, neon>> not implementend.");
      WARN("Primitive load<simd<uint64_t, neon>> not implementend.");
      WARN("Primitive load<simd<uint8_t, neon>> not implementend.");
   }
}
TEST_CASE("Testing primitive load for scalar", "[load],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_load_default<simd<double, scalar>>());
      CHECK(test_load_default<simd<float, scalar>>());
      CHECK(test_load_default<simd<int16_t, scalar>>());
      CHECK(test_load_default<simd<int32_t, scalar>>());
      CHECK(test_load_default<simd<int64_t, scalar>>());
      CHECK(test_load_default<simd<int8_t, scalar>>());
      CHECK(test_load_default<simd<uint16_t, scalar>>());
      CHECK(test_load_default<simd<uint32_t, scalar>>());
      CHECK(test_load_default<simd<uint64_t, scalar>>());
      CHECK(test_load_default<simd<uint8_t, scalar>>());
   }
}
TEST_CASE("Testing primitive load for sse", "[load],[sse]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_load_default<simd<double, sse>>());
      CHECK(test_load_default<simd<float, sse>>());
      CHECK(test_load_default<simd<int16_t, sse>>());
      CHECK(test_load_default<simd<int32_t, sse>>());
      CHECK(test_load_default<simd<int64_t, sse>>());
      CHECK(test_load_default<simd<int8_t, sse>>());
      CHECK(test_load_default<simd<uint16_t, sse>>());
      CHECK(test_load_default<simd<uint32_t, sse>>());
      CHECK(test_load_default<simd<uint64_t, sse>>());
      CHECK(test_load_default<simd<uint8_t, sse>>());
   }
}
TEST_CASE("Testing primitive loadu for avx2", "[loadu],[avx2]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_loadu_default<simd<double, avx2>>());
      CHECK(test_loadu_default<simd<float, avx2>>());
      CHECK(test_loadu_default<simd<int16_t, avx2>>());
      CHECK(test_loadu_default<simd<int32_t, avx2>>());
      CHECK(test_loadu_default<simd<int64_t, avx2>>());
      CHECK(test_loadu_default<simd<int8_t, avx2>>());
      CHECK(test_loadu_default<simd<uint16_t, avx2>>());
      CHECK(test_loadu_default<simd<uint32_t, avx2>>());
      CHECK(test_loadu_default<simd<uint64_t, avx2>>());
      CHECK(test_loadu_default<simd<uint8_t, avx2>>());
   }
}
TEST_CASE("Testing primitive loadu for avx512", "[loadu],[avx512]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_loadu_default<simd<double, avx512>>());
      CHECK(test_loadu_default<simd<float, avx512>>());
      CHECK(test_loadu_default<simd<int16_t, avx512>>());
      CHECK(test_loadu_default<simd<int32_t, avx512>>());
      CHECK(test_loadu_default<simd<int64_t, avx512>>());
      CHECK(test_loadu_default<simd<int8_t, avx512>>());
      CHECK(test_loadu_default<simd<uint16_t, avx512>>());
      CHECK(test_loadu_default<simd<uint32_t, avx512>>());
      CHECK(test_loadu_default<simd<uint64_t, avx512>>());
      CHECK(test_loadu_default<simd<uint8_t, avx512>>());
   }
}
TEST_CASE("Testing primitive loadu for cuda", "[loadu],[cuda]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive loadu not implementend for cuda");
   }
}
TEST_CASE("Testing primitive loadu for neon", "[loadu],[neon]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Can't run. Required primitive(s) ['storeu<double,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<float,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<int16_t,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<int32_t,neon>'] not provided.");
      CHECK(test_loadu_default<simd<int64_t, neon>>());
      WARN("Can't run. Required primitive(s) ['storeu<int8_t,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<uint16_t,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<uint32_t,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<uint64_t,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<uint8_t,neon>'] not provided.");
   }
}
TEST_CASE("Testing primitive loadu for scalar", "[loadu],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_loadu_default<simd<double, scalar>>());
      CHECK(test_loadu_default<simd<float, scalar>>());
      CHECK(test_loadu_default<simd<int16_t, scalar>>());
      CHECK(test_loadu_default<simd<int32_t, scalar>>());
      CHECK(test_loadu_default<simd<int64_t, scalar>>());
      CHECK(test_loadu_default<simd<int8_t, scalar>>());
      CHECK(test_loadu_default<simd<uint16_t, scalar>>());
      CHECK(test_loadu_default<simd<uint32_t, scalar>>());
      CHECK(test_loadu_default<simd<uint64_t, scalar>>());
      CHECK(test_loadu_default<simd<uint8_t, scalar>>());
   }
}
TEST_CASE("Testing primitive loadu for sse", "[loadu],[sse]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_loadu_default<simd<double, sse>>());
      CHECK(test_loadu_default<simd<float, sse>>());
      CHECK(test_loadu_default<simd<int16_t, sse>>());
      CHECK(test_loadu_default<simd<int32_t, sse>>());
      CHECK(test_loadu_default<simd<int64_t, sse>>());
      CHECK(test_loadu_default<simd<int8_t, sse>>());
      CHECK(test_loadu_default<simd<uint16_t, sse>>());
      CHECK(test_loadu_default<simd<uint32_t, sse>>());
      CHECK(test_loadu_default<simd<uint64_t, sse>>());
      CHECK(test_loadu_default<simd<uint8_t, sse>>());
   }
}
TEST_CASE("Testing primitive set for avx2", "[set],[avx2]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_set_default<simd<double, avx2>>());
      CHECK(test_set_default<simd<float, avx2>>());
      CHECK(test_set_default<simd<int16_t, avx2>>());
      CHECK(test_set_default<simd<int32_t, avx2>>());
      CHECK(test_set_default<simd<int64_t, avx2>>());
      CHECK(test_set_default<simd<int8_t, avx2>>());
      CHECK(test_set_default<simd<uint16_t, avx2>>());
      CHECK(test_set_default<simd<uint32_t, avx2>>());
      CHECK(test_set_default<simd<uint64_t, avx2>>());
      CHECK(test_set_default<simd<uint8_t, avx2>>());
   }
}
TEST_CASE("Testing primitive set for avx512", "[set],[avx512]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_set_default<simd<double, avx512>>());
      CHECK(test_set_default<simd<float, avx512>>());
      CHECK(test_set_default<simd<int16_t, avx512>>());
      CHECK(test_set_default<simd<int32_t, avx512>>());
      CHECK(test_set_default<simd<int64_t, avx512>>());
      CHECK(test_set_default<simd<int8_t, avx512>>());
      CHECK(test_set_default<simd<uint16_t, avx512>>());
      CHECK(test_set_default<simd<uint32_t, avx512>>());
      CHECK(test_set_default<simd<uint64_t, avx512>>());
      CHECK(test_set_default<simd<uint8_t, avx512>>());
   }
}
TEST_CASE("Testing primitive set for cuda", "[set],[cuda]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive set not implementend for cuda");
   }
}
TEST_CASE("Testing primitive set for neon", "[set],[neon]") {
   using namespace tvl;
   SECTION("default") {
   }
}
TEST_CASE("Testing primitive set for scalar", "[set],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_set_default<simd<double, scalar>>());
      CHECK(test_set_default<simd<float, scalar>>());
      CHECK(test_set_default<simd<int16_t, scalar>>());
      CHECK(test_set_default<simd<int32_t, scalar>>());
      CHECK(test_set_default<simd<int64_t, scalar>>());
      CHECK(test_set_default<simd<int8_t, scalar>>());
      CHECK(test_set_default<simd<uint16_t, scalar>>());
      CHECK(test_set_default<simd<uint32_t, scalar>>());
      CHECK(test_set_default<simd<uint64_t, scalar>>());
      CHECK(test_set_default<simd<uint8_t, scalar>>());
   }
}
TEST_CASE("Testing primitive set for sse", "[set],[sse]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_set_default<simd<double, sse>>());
      CHECK(test_set_default<simd<float, sse>>());
      CHECK(test_set_default<simd<int16_t, sse>>());
      CHECK(test_set_default<simd<int32_t, sse>>());
      CHECK(test_set_default<simd<int64_t, sse>>());
      CHECK(test_set_default<simd<int8_t, sse>>());
      CHECK(test_set_default<simd<uint16_t, sse>>());
      CHECK(test_set_default<simd<uint32_t, sse>>());
      CHECK(test_set_default<simd<uint64_t, sse>>());
      CHECK(test_set_default<simd<uint8_t, sse>>());
   }
}
TEST_CASE("Testing primitive add for avx2", "[add],[avx2]") {
   using namespace tvl;
   SECTION("running_sum_w_epsilon") {
      CHECK(test_add_running_sum_w_epsilon<simd<double, avx2>>());
      CHECK(test_add_running_sum_w_epsilon<simd<float, avx2>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int16_t, avx2>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int32_t, avx2>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int64_t, avx2>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int8_t, avx2>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint16_t, avx2>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint32_t, avx2>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint64_t, avx2>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint8_t, avx2>>());
   }
   SECTION("zero_cornercase") {
      CHECK(test_add_zero_cornercase<simd<double, avx2>>());
      CHECK(test_add_zero_cornercase<simd<float, avx2>>());
      CHECK(test_add_zero_cornercase<simd<int16_t, avx2>>());
      CHECK(test_add_zero_cornercase<simd<int32_t, avx2>>());
      CHECK(test_add_zero_cornercase<simd<int64_t, avx2>>());
      CHECK(test_add_zero_cornercase<simd<int8_t, avx2>>());
      CHECK(test_add_zero_cornercase<simd<uint16_t, avx2>>());
      CHECK(test_add_zero_cornercase<simd<uint32_t, avx2>>());
      CHECK(test_add_zero_cornercase<simd<uint64_t, avx2>>());
      CHECK(test_add_zero_cornercase<simd<uint8_t, avx2>>());
   }
}
TEST_CASE("Testing primitive add for avx512", "[add],[avx512]") {
   using namespace tvl;
   SECTION("running_sum_w_epsilon") {
      CHECK(test_add_running_sum_w_epsilon<simd<double, avx512>>());
      CHECK(test_add_running_sum_w_epsilon<simd<float, avx512>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int16_t, avx512>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int32_t, avx512>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int64_t, avx512>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int8_t, avx512>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint16_t, avx512>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint32_t, avx512>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint64_t, avx512>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint8_t, avx512>>());
   }
   SECTION("zero_cornercase") {
      CHECK(test_add_zero_cornercase<simd<double, avx512>>());
      CHECK(test_add_zero_cornercase<simd<float, avx512>>());
      CHECK(test_add_zero_cornercase<simd<int16_t, avx512>>());
      CHECK(test_add_zero_cornercase<simd<int32_t, avx512>>());
      CHECK(test_add_zero_cornercase<simd<int64_t, avx512>>());
      CHECK(test_add_zero_cornercase<simd<int8_t, avx512>>());
      CHECK(test_add_zero_cornercase<simd<uint16_t, avx512>>());
      CHECK(test_add_zero_cornercase<simd<uint32_t, avx512>>());
      CHECK(test_add_zero_cornercase<simd<uint64_t, avx512>>());
      CHECK(test_add_zero_cornercase<simd<uint8_t, avx512>>());
   }
}
TEST_CASE("Testing primitive add for cuda", "[add],[cuda]") {
   using namespace tvl;
   SECTION("running_sum_w_epsilon") {
      WARN("Can't run. Required primitive(s) ['set1<uint8_t,cuda>', 'loadu<uint8_t,cuda>', 'hadd<uint8_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<uint16_t,cuda>', 'loadu<uint16_t,cuda>', 'hadd<uint16_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<uint32_t,cuda>', 'loadu<uint32_t,cuda>', 'hadd<uint32_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<uint64_t,cuda>', 'loadu<uint64_t,cuda>', 'hadd<uint64_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<int8_t,cuda>', 'loadu<int8_t,cuda>', 'hadd<int8_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<int16_t,cuda>', 'loadu<int16_t,cuda>', 'hadd<int16_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<int32_t,cuda>', 'loadu<int32_t,cuda>', 'hadd<int32_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<int64_t,cuda>', 'loadu<int64_t,cuda>', 'hadd<int64_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<float,cuda>', 'loadu<float,cuda>', 'hadd<float,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<double,cuda>', 'loadu<double,cuda>', 'hadd<double,cuda>'] not provided.");
   }
   SECTION("zero_cornercase") {
      WARN("Can't run. Required primitive(s) ['set1<uint8_t,cuda>', 'loadu<uint8_t,cuda>', 'hadd<uint8_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<uint16_t,cuda>', 'loadu<uint16_t,cuda>', 'hadd<uint16_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<uint32_t,cuda>', 'loadu<uint32_t,cuda>', 'hadd<uint32_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<uint64_t,cuda>', 'loadu<uint64_t,cuda>', 'hadd<uint64_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<int8_t,cuda>', 'loadu<int8_t,cuda>', 'hadd<int8_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<int16_t,cuda>', 'loadu<int16_t,cuda>', 'hadd<int16_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<int32_t,cuda>', 'loadu<int32_t,cuda>', 'hadd<int32_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<int64_t,cuda>', 'loadu<int64_t,cuda>', 'hadd<int64_t,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<float,cuda>', 'loadu<float,cuda>', 'hadd<float,cuda>'] not provided.");
      WARN("Can't run. Required primitive(s) ['set1<double,cuda>', 'loadu<double,cuda>', 'hadd<double,cuda>'] not provided.");
   }
}
TEST_CASE("Testing primitive add for neon", "[add],[neon]") {
   using namespace tvl;
   SECTION("running_sum_w_epsilon") {
      WARN("Primitive add<simd<double, neon>> not implementend.");
      WARN("Primitive add<simd<float, neon>> not implementend.");
      WARN("Primitive add<simd<int16_t, neon>> not implementend.");
      WARN("Primitive add<simd<int32_t, neon>> not implementend.");
      CHECK(test_add_running_sum_w_epsilon<simd<int64_t, neon>>());
      WARN("Primitive add<simd<int8_t, neon>> not implementend.");
      WARN("Primitive add<simd<uint16_t, neon>> not implementend.");
      WARN("Primitive add<simd<uint32_t, neon>> not implementend.");
      WARN("Primitive add<simd<uint64_t, neon>> not implementend.");
      WARN("Primitive add<simd<uint8_t, neon>> not implementend.");
   }
   SECTION("zero_cornercase") {
      WARN("Primitive add<simd<double, neon>> not implementend.");
      WARN("Primitive add<simd<float, neon>> not implementend.");
      WARN("Primitive add<simd<int16_t, neon>> not implementend.");
      WARN("Primitive add<simd<int32_t, neon>> not implementend.");
      CHECK(test_add_zero_cornercase<simd<int64_t, neon>>());
      WARN("Primitive add<simd<int8_t, neon>> not implementend.");
      WARN("Primitive add<simd<uint16_t, neon>> not implementend.");
      WARN("Primitive add<simd<uint32_t, neon>> not implementend.");
      WARN("Primitive add<simd<uint64_t, neon>> not implementend.");
      WARN("Primitive add<simd<uint8_t, neon>> not implementend.");
   }
}
TEST_CASE("Testing primitive add for scalar", "[add],[scalar]") {
   using namespace tvl;
   SECTION("running_sum_w_epsilon") {
      CHECK(test_add_running_sum_w_epsilon<simd<double, scalar>>());
      CHECK(test_add_running_sum_w_epsilon<simd<float, scalar>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int16_t, scalar>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int32_t, scalar>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int64_t, scalar>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int8_t, scalar>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint16_t, scalar>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint32_t, scalar>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint64_t, scalar>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint8_t, scalar>>());
   }
   SECTION("zero_cornercase") {
      CHECK(test_add_zero_cornercase<simd<double, scalar>>());
      CHECK(test_add_zero_cornercase<simd<float, scalar>>());
      CHECK(test_add_zero_cornercase<simd<int16_t, scalar>>());
      CHECK(test_add_zero_cornercase<simd<int32_t, scalar>>());
      CHECK(test_add_zero_cornercase<simd<int64_t, scalar>>());
      CHECK(test_add_zero_cornercase<simd<int8_t, scalar>>());
      CHECK(test_add_zero_cornercase<simd<uint16_t, scalar>>());
      CHECK(test_add_zero_cornercase<simd<uint32_t, scalar>>());
      CHECK(test_add_zero_cornercase<simd<uint64_t, scalar>>());
      CHECK(test_add_zero_cornercase<simd<uint8_t, scalar>>());
   }
}
TEST_CASE("Testing primitive add for sse", "[add],[sse]") {
   using namespace tvl;
   SECTION("running_sum_w_epsilon") {
      CHECK(test_add_running_sum_w_epsilon<simd<double, sse>>());
      CHECK(test_add_running_sum_w_epsilon<simd<float, sse>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int16_t, sse>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int32_t, sse>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int64_t, sse>>());
      CHECK(test_add_running_sum_w_epsilon<simd<int8_t, sse>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint16_t, sse>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint32_t, sse>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint64_t, sse>>());
      CHECK(test_add_running_sum_w_epsilon<simd<uint8_t, sse>>());
   }
   SECTION("zero_cornercase") {
      CHECK(test_add_zero_cornercase<simd<double, sse>>());
      CHECK(test_add_zero_cornercase<simd<float, sse>>());
      CHECK(test_add_zero_cornercase<simd<int16_t, sse>>());
      CHECK(test_add_zero_cornercase<simd<int32_t, sse>>());
      CHECK(test_add_zero_cornercase<simd<int64_t, sse>>());
      CHECK(test_add_zero_cornercase<simd<int8_t, sse>>());
      CHECK(test_add_zero_cornercase<simd<uint16_t, sse>>());
      CHECK(test_add_zero_cornercase<simd<uint32_t, sse>>());
      CHECK(test_add_zero_cornercase<simd<uint64_t, sse>>());
      CHECK(test_add_zero_cornercase<simd<uint8_t, sse>>());
   }
}
TEST_CASE("Testing primitive mul for avx2", "[mul],[avx2]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_mul_default<simd<double, avx2>>());
      CHECK(test_mul_default<simd<float, avx2>>());
      CHECK(test_mul_default<simd<int16_t, avx2>>());
      CHECK(test_mul_default<simd<int32_t, avx2>>());
      CHECK(test_mul_default<simd<int64_t, avx2>>());
      CHECK(test_mul_default<simd<int8_t, avx2>>());
      CHECK(test_mul_default<simd<uint16_t, avx2>>());
      CHECK(test_mul_default<simd<uint32_t, avx2>>());
      CHECK(test_mul_default<simd<uint64_t, avx2>>());
      CHECK(test_mul_default<simd<uint8_t, avx2>>());
   }
}
TEST_CASE("Testing primitive mul for avx512", "[mul],[avx512]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_mul_default<simd<double, avx512>>());
      CHECK(test_mul_default<simd<float, avx512>>());
      CHECK(test_mul_default<simd<int16_t, avx512>>());
      CHECK(test_mul_default<simd<int32_t, avx512>>());
      CHECK(test_mul_default<simd<int64_t, avx512>>());
      CHECK(test_mul_default<simd<int8_t, avx512>>());
      CHECK(test_mul_default<simd<uint16_t, avx512>>());
      CHECK(test_mul_default<simd<uint32_t, avx512>>());
      CHECK(test_mul_default<simd<uint64_t, avx512>>());
      CHECK(test_mul_default<simd<uint8_t, avx512>>());
   }
}
TEST_CASE("Testing primitive mul for cuda", "[mul],[cuda]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive mul not implementend for cuda");
   }
}
TEST_CASE("Testing primitive mul for neon", "[mul],[neon]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Can't run. Required primitive(s) ['storeu<double,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<float,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<int16_t,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<int32_t,neon>'] not provided.");
      CHECK(test_mul_default<simd<int64_t, neon>>());
      WARN("Can't run. Required primitive(s) ['storeu<int8_t,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<uint16_t,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<uint32_t,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<uint64_t,neon>'] not provided.");
      WARN("Can't run. Required primitive(s) ['storeu<uint8_t,neon>'] not provided.");
   }
}
TEST_CASE("Testing primitive mul for scalar", "[mul],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_mul_default<simd<double, scalar>>());
      CHECK(test_mul_default<simd<float, scalar>>());
      CHECK(test_mul_default<simd<int16_t, scalar>>());
      CHECK(test_mul_default<simd<int32_t, scalar>>());
      CHECK(test_mul_default<simd<int64_t, scalar>>());
      CHECK(test_mul_default<simd<int8_t, scalar>>());
      CHECK(test_mul_default<simd<uint16_t, scalar>>());
      CHECK(test_mul_default<simd<uint32_t, scalar>>());
      CHECK(test_mul_default<simd<uint64_t, scalar>>());
      CHECK(test_mul_default<simd<uint8_t, scalar>>());
   }
}
TEST_CASE("Testing primitive mul for sse", "[mul],[sse]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_mul_default<simd<double, sse>>());
      CHECK(test_mul_default<simd<float, sse>>());
      CHECK(test_mul_default<simd<int16_t, sse>>());
      CHECK(test_mul_default<simd<int32_t, sse>>());
      CHECK(test_mul_default<simd<int64_t, sse>>());
      CHECK(test_mul_default<simd<int8_t, sse>>());
      CHECK(test_mul_default<simd<uint16_t, sse>>());
      CHECK(test_mul_default<simd<uint32_t, sse>>());
      CHECK(test_mul_default<simd<uint64_t, sse>>());
      CHECK(test_mul_default<simd<uint8_t, sse>>());
   }
}

