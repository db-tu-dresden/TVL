#ifndef MATRIX_MULT_VECTORIZED_H
#define MATRIX_MULT_VECTORIZED_H

#include "../../lib/include/tvlintrin.hpp"
#include "matrix.h"

template< typename VectorExtension, typename T >
void matrix_mult( matrix_t< T >* a, matrix_t< T >* b, matrix_t< T >* matrix_out ) {
   using namespace tvl;

   if ( a->rows != b->rows ) {
      std::cout << "Error: Can only multiply with matching dimensions." << std::endl;
      return;
   }

   size_t const vectorCount_a = a->cols / VectorExtension::vector_element_count();
   size_t const remainderCount_a = a->cols % VectorExtension::vector_element_count();

   for ( size_t rows = 0; rows < a->rows; ++rows ) {
      T* data_a = (T*) a->get_row( rows );
      for ( size_t cols = 0; cols < b->rows; ++cols ) {
         T* data_b = (T*) b->get_row( cols );

         auto val = set1< VectorExtension >( 0 );

         for ( size_t i = 0; i < a->cols; i+=VectorExtension::vector_element_count() ) {
            val = add<VectorExtension>( 
               val,
               mul<VectorExtension>( 
                  loadu<VectorExtension>(&data_a[i]),
                  loadu<VectorExtension>(&data_b[i])
               )
            );
         }
         for ( size_t i = 0; i < remainderCount_a; ++i ) {
            val += data_a[i] * data_b[i];
         }
         matrix_out->set_value( rows, cols, hadd<VectorExtension>(val) );
      }
   }
   return;
}

#endif // MATRIX_MULT_VECTORIZED_H