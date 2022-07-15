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
 * Row major data organization:
 * Assuming 2 cols, 3 rows:
 * [ x0, x1 ]
 * [ x2, x3 ]
 * [ x4, x5 ]
 * --> [x0, x1, x2, x3, x4, x5, ... ]
 * @tparam T The stored datatype inside the matrix
 */
template <typename T>
struct matrix_t {
    // Data array pointer
    T* data;
    // Row count of the matrix
    std::size_t rows;
    // Column count of the matrix
    std::size_t cols;

    /**
     * @brief Construct a new matrix t object
     *
     * @param dim_x Row count of the matrix
     * @param dim_y Column count of the matrix
     */

    matrix_t(std::size_t dim_x, std::size_t dim_y) : data{(T*)aligned_alloc(64, dim_x * dim_y * sizeof(T))},
                                                     rows{dim_x},
                                                     cols{dim_y} {
        // std::cout << "Creating matrix with " << dim_x << " rows and " << dim_y << " cols." << std::endl;
        clear();
    }

    /**
     * @brief Destroy the matrix t object
     *
     */
    ~matrix_t() {
        del();
    }

    /**
     * @brief Transform the matrix from A to A^T.
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

    /**
     * @brief Get a certain row from the matrix
     *
     * @tparam T The data type of the stored values
     * @param row_idx The index of the requested row
     * @return The pointer to the beginning of the row
     */
    T* get_row(const std::size_t row_idx) const {
        return data + (row_idx * cols);
    }

    /**
     * @brief The Kahan summation formula for deterministically adding numerous floating point values
     * see also https://www.geeksforgeeks.org/kahan-summation-algorithm/
     * @return The sum of all elements in the matrix
     */
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

    /**
     * @brief Calculate the checksum of the matrix
     *
     * @return The checksum of the matrix
     */
    double checksum() const {
        return kahanSum();
    }

    /**
     * @brief Set the value of a specific matrix cell
     *
     * @tparam template-parameter-name description
     * @param row The row of the value
     * @param col The column of the value
     * @param val The value to be set at matrix[ row ][ col ]
     */
    void set_value(const std::size_t row, const std::size_t col, const T val) {
        data[(row * cols) + col] = val;
    }

    /**
     * @brief Create a deep copy of the matrix
     *
     * @return A pointer to a matrix_t object, containing the exact same data as the calling object.
     */
    matrix_t<T>* copy() const {
        matrix_t<T>* tmp = new matrix_t<T>(rows, cols);
        memcpy(tmp->data, data, rows * cols * sizeof(T));
        return tmp;
    }

    /**
     * @brief Set all matrix elements to 0
     *
     */
    void clear() {
        memset(data, 0, rows * cols * sizeof(T));
    }

    /**
     * @brief Free the internal data array
     *
     */
    void del() {
        if (data != nullptr) {
            free(data);
            data = nullptr;
        }
    }

    /**
     * @brief Determine the type of the to-be-used data distribution engine based on the given data type
     */
    template <class D>
    using uniform_distribution =
        typename std::conditional_t<
            std::is_floating_point_v<D>,
            std::uniform_real_distribution<D>,
            typename std::conditional_t<
                std::is_integral_v<D>,
                std::uniform_int_distribution<D>,
                void> >;

    /**
     * @brief Create values and insert them into the matrix
     *
     * @param seed Initialize the random number generator
     * @param zero_probability Ratio of 0-values in the matrix
     * @param debug If set, zero probability is ignored
     */
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

    /**
     * @brief Get the estimated memory consumption
     *
     * @return Bytes stored inside the matrix object
     */
    std::size_t get_estimated_memory_consumption() const {
        return (rows * cols) * sizeof(T) + 2 * sizeof(T);
    }

    /**
     * @brief Print the matrix to stdout
     *
     */
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