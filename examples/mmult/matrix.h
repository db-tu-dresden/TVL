#ifndef TUDDBS_MATRIX_H
#define TUDDBS_MATRIX_H

#include <chrono>
#include <cstddef>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>

/**
 * @brief
 * @tparam T
 * Data Organization:
 * Assuming 2 cols, 3 rows:
 * [ x0, x1 ]
 * [ x2, x3 ]
 * [ x4, x5 ]
 * --> [x0, x1, x2, x3, x4, x5, ... ]
 */
template <typename T>
struct matrix_t {
    /* Normal Matrix Info */
    T* data;
    std::size_t rows;
    std::size_t cols;

    matrix_t(std::size_t dim_x, std::size_t dim_y) : data{(T*)aligned_alloc(64, dim_x * dim_y * sizeof(T))},
                                                     rows{dim_x},
                                                     cols{dim_y} {
        // std::cout << "Creating matrix with " << dim_x << " rows and " << dim_y << " cols." << std::endl;
        clear();
    }

    ~matrix_t() {
        del();
    }

    /**
     * @brief
     * Assuming 2 cols, 3 rows --> 3 cols, 2 rows
     * [ x0, x1 ]
     * [ x2, x3 ]
     * [ x4, x5 ]
     * -->
     * [ x0, x2, x4]
     * [ x1, x3, x5]
     * --> [ x0, x2, x4, x1, x3, x5, ... ]
     */
    void transpose() {
        T* new_data = (T*)aligned_alloc(64, rows * cols * sizeof(T));
        T* pos = new_data;
        for (std::size_t col = 0; col < cols; ++col) {
            std::size_t position = col;
            for (std::size_t row = 0; row < rows; ++row) {
                *(pos++) = data[position];
                position += cols;
            }
        }
        free(data);
        data = new_data;
        std::swap(rows, cols);
    }

    T* get_row(const std::size_t row_idx) const {
        return data + (row_idx * cols);
    }

    /* https://www.geeksforgeeks.org/kahan-summation-algorithm/ */
    double kahanSum() const {
        double sum = 0.0;

        // Variable to store the error
        double c = 0.0;

        // Loop to iterate over the array
        for (size_t i = 0; i < rows * cols; ++i) {
            double f = static_cast<double>(data[i]);
            double y = f - c;
            double t = sum + y;

            // Algebraically, c is always 0
            // when t is replaced by its
            // value from the above expression.
            // But, when there is a loss,
            // the higher-order y is cancelled
            // out by subtracting y from c and
            // all that remains is the
            // lower-order error in c
            c = (t - sum) - y;
            sum = t;
        }
        return sum;
    }

    double checksum() const {
        return kahanSum();
    }

    void set_value(const std::size_t row, const std::size_t col, const T val) {
        data[(row * cols) + col] = val;
    }

    matrix_t<T>* copy() const {
        matrix_t<T>* tmp = new matrix_t<T>(rows, cols);
        memcpy(tmp->data, data, rows * cols * sizeof(T));
        return tmp;
    }

    void clear() {
        memset(data, 0, rows * cols * sizeof(T));
    }

    void del() {
        if (data != nullptr) {
            free(data);
            data = nullptr;
        }
    }

    template <class D>
    using uniform_distribution =
        typename std::conditional_t<
            std::is_floating_point_v<D>,
            std::uniform_real_distribution<D>,
            typename std::conditional_t<
                std::is_integral_v<D>,
                std::uniform_int_distribution<D>,
                void> >;

    void fill(const std::size_t seed, const double zero_probability, const bool debug = false) {
        std::mt19937_64 rng;
        // initialize the random number generator with time-dependent seed
        uint64_t timeSeed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
        std::seed_seq ss{uint32_t(timeSeed & 0xffffffff), uint32_t(timeSeed >> 32)};
        rng.seed(ss);
        std::uniform_real_distribution<double> unif(0, 1);

        if (data == nullptr) {
            data = (T*)aligned_alloc(64, rows * cols * sizeof(T));
        }

        T* m = data;
        std::mt19937 generator(seed);
        uniform_distribution<T> distribution(0, 5);
        if (debug) {
            for (size_t i = 0; i < rows * cols; ++i) {
                *(m++) = distribution(generator) + 1;
            }
        } else {
            for (size_t i = 0; i < rows * cols; ++i) {
                if (unif(rng) > zero_probability) {
                    *(m++) = distribution(generator) + 1;
                } else {
                    *(m++) = 0;
                }
            }
        }
    }

    std::size_t get_estimated_memory_consumption() const {
        return (rows * cols) * sizeof(T) + 2 * sizeof(T);
    }

    void print() const {
        using namespace std;
        std::cout << "Printing matrix. Rows: " << rows << " Cols: " << cols << std::endl;
        for (size_t i = 0; i < rows * cols; ++i) {
            cout << data[i] << " ";
            if (i > 0 && i % cols == cols - 1) cout << "\n";
        }
        cout << "\n";
    }
};

#endif