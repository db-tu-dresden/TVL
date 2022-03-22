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
 * @file /home/runner/work/TVLPrimitiveData/TVLPrimitiveData/lib/static/utils/type_helper.hpp
 * @date 22.03.2022
 * @brief TODO.
 */
#ifndef TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_STATIC_UTILS_TYPE_HELPER_HPP
#define TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_STATIC_UTILS_TYPE_HELPER_HPP

#include <cstddef>
#include <type_traits>
#include <typeinfo>
#include <cxxabi.h>
#include <memory>
#include <string>
#include <cstdlib>
#include <limits>

namespace tvl {
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

   
} // end of namespace tvl

#endif //TUD_D2RG_TVL__HOME_RUNNER_WORK_TVLPRIMITIVEDATA_TVLPRIMITIVEDATA_LIB_STATIC_UTILS_TYPE_HELPER_HPP