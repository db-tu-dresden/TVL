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
 * \file /home/runner/work/TVLGen/TVLGen/lib/include/static/utils/type_helper.hpp
 * \date 2022-11-11
 * \brief TODO.
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

#ifndef TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_STATIC_UTILS_TYPE_HELPER_HPP
#define TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_STATIC_UTILS_TYPE_HELPER_HPP

#include <cstddef>
#include <type_traits>
#include <typeinfo>
#include <cxxabi.h>
#include <memory>
#include <string>
#include <cstdlib>
#include <limits>
#include <iostream>
namespace tvl {
   enum class modifier {
        HEX,
        DEC,
        OCT,
        BIN
};
   template< class T >
   std::string type_name( ) {
      typedef typename std::remove_reference< T >::type TR;
      std::unique_ptr< char, void ( * )( void * ) > own (
         abi::__cxa_demangle( typeid( TR ).name( ), nullptr,nullptr, nullptr ),
         std::free
      );
      std::string r = own != nullptr ? own.get( ) : typeid( TR ).name( );
      if( std::is_const< TR >::value ) {
         r += " const";
      }
      if( std::is_volatile< TR >::value ) {
         r += " volatile";
         }
      if( std::is_lvalue_reference< T >::value ) {
         r += "&";
      } else if( std::is_rvalue_reference< T >::value ) {
         r += "&&";
      }
      return r;
   }
   #define TYPENAME( x ) type_name< decltype( x ) >( )
   template< typename T >
   struct is_tuple_impl : std::false_type { };   
   template< typename... Ts >
   struct is_tuple_impl< std::tuple< Ts... > > : std::true_type { };
   template< typename T >
   struct is_tuple : is_tuple_impl< std::remove_cv_t< T > > { };
   using offset_t = std::size_t;
   constexpr unsigned cilog2(unsigned val) { return val ? 1 + cilog2(val >> 1) : -1; }
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_RUNNER_WORK_TVLGEN_TVLGEN_LIB_INCLUDE_STATIC_UTILS_TYPE_HELPER_HPP