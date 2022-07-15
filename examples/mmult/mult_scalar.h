#ifndef MATRIX_MULT_SCALAR_H
#define MATRIX_MULT_SCALAR_H

#include "../../lib/include/tvlintrin.hpp"
#include "matrix.h"

/**
 * @brief Classic multiplication of an n*m and m*n matrix
 * 
 * @tparam T The data type of the elements inside the matrices
 * @param a The first matrix of the multiplication
 * @param b The second matrix of the multiplication.
 * @param matrix_out The matrix to store the result of the multiplication
 */
template <typename T>
void matrix_mult_classic(matrix_t<T>* a, matrix_t<T>* b, matrix_t<T>* matrix_out) {
    if (a->rows != b->cols) {
        std::cout << "Error: Can only multiply with matching dimensions." << std::endl;
        return;
    }

    for (size_t rowidx = 0; rowidx < a->rows; ++rowidx) {
        auto a_row = a->get_row(rowidx);
        for (size_t colidx = 0; colidx < b->cols; ++colidx) {
            T val = 0;
            for (size_t idx = 0; idx < a->cols; ++idx) {
                val += a_row[idx] * b->get_row(idx)[colidx];
            }
            matrix_out->set_value(rowidx, colidx, val);
        }
    }

    return;
}

/**
 * @brief Classic multiplication of an n*m and m*n matrix
 * 
 * @tparam T The data type of the elements inside the matrices
 * @param a The first matrix of the multiplication
 * @param b The second matrix of the multiplication. Required to be in transposed form
 * @param matrix_out The matrix to store the result of the multiplication
 */
template <typename T>
void matrix_mult_classic_pretransposed(matrix_t<T>* a, matrix_t<T>* b, matrix_t<T>* matrix_out) {
    if (a->rows != b->rows) {
        std::cout << "Error: Can only multiply with matching dimensions." << std::endl;
        return;
    }

    for (size_t a_rowidx = 0; a_rowidx < a->rows; ++a_rowidx) {
        auto a_row = a->get_row(a_rowidx);
        for (size_t b_rowidx = 0; b_rowidx < b->rows; ++b_rowidx) {
            auto b_row = b->get_row(b_rowidx);
            T val = 0;
            for (size_t idx = 0; idx < a->cols; ++idx) {
                val += a_row[idx] * b_row[idx];
            }
            matrix_out->set_value(a_rowidx, b_rowidx, val);
        }
    }

    return;
}

#endif  // MATRIX_MULT_SCALAR_H