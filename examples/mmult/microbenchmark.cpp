#include <stdio.h>
#include <string.h>

#include <cstdio>
#include <functional>
#include <iostream>
#include <sstream>

#include "../../lib/include/tvlintrin.hpp"
#include "matrix.h"
#include "mult_scalar.h"
#include "mult_vectorized.h"

size_t benchmark_hres(std::function<void()> f, size_t num_iters) {
    std::vector<size_t> times(num_iters);
    for (auto& time : times) {
        auto start = std::chrono::high_resolution_clock::now();
        f();
        auto end = std::chrono::high_resolution_clock::now();
        time = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    }

    // compute median
    std::sort(times.begin(), times.end());
    std::cout << "Runtime by iteration: ";
    for (size_t i = 0; i < num_iters; i++) {
        std::cout << times[i] << " ";
    }

    size_t median = 0;
    if (num_iters % 2 == 0) {
        const auto lower = (num_iters - 1) / 2;
        const auto upper = (num_iters + 1) / 2;
        median = (times[lower] + times[upper]) / 2;
    } else {
        median = times[num_iters / 2];
    }

    std::cout << std::endl
              << "median of " << num_iters << " runs: " << std::endl
              << "\t" << median << "µs" << std::endl
              << std::endl;
    return median;
}

template <typename my_base>
void run_vecs(const size_t n, const size_t m, const size_t benchmark_runs = 5) {
    matrix_t<my_base>* matrix_a = new matrix_t<my_base>(n, m);
    matrix_t<my_base>* matrix_b = new matrix_t<my_base>(m, n);
    matrix_t<my_base>* matrix_out = new matrix_t<my_base>(matrix_a->rows, matrix_b->cols);

    matrix_a->fill(1337421337, 0.2);
    matrix_b->fill(1337421337, 0.2);

    auto matrix_b_t = matrix_b->copy();
    matrix_b_t->transpose();

    using namespace tvl;
    using tvl_scalar = simd<my_base, scalar>;
    using tvl_sse = simd<my_base, sse, 128>;
    using tvl_avx2 = simd<my_base, avx2>;

    std::vector<double> checksums;
    std::vector<size_t> runtimes;
    std::vector<std::string> idents;

    std::cout << "------ Running TVL (Scalar) ------" << std::endl;
    runtimes.push_back(benchmark_hres([&] { matrix_mult<tvl_scalar>(matrix_a, matrix_b_t, matrix_out); }, benchmark_runs));
    std::cout << " + Result checksum: " << matrix_out->checksum() << std::endl
              << std::endl;
    checksums.push_back(matrix_out->checksum());
    idents.push_back("Scalar");
    matrix_out->clear();

    std::cout << "------ Running TVL (SSE) ------" << std::endl;
    runtimes.push_back(benchmark_hres([&] { matrix_mult<tvl_sse>(matrix_a, matrix_b_t, matrix_out); }, benchmark_runs));
    std::cout << " + Result checksum: " << matrix_out->checksum() << std::endl
              << std::endl;
    checksums.push_back(matrix_out->checksum());
    idents.push_back("SSE");
    matrix_out->clear();

    std::cout << "------ Running TVL (AVX2) ------" << std::endl;
    runtimes.push_back(benchmark_hres([&] { matrix_mult<tvl_avx2>(matrix_a, matrix_b_t, matrix_out); }, benchmark_runs));
    std::cout << " + Result checksum: " << matrix_out->checksum() << std::endl
              << std::endl;
    checksums.push_back(matrix_out->checksum());
    idents.push_back("AVX2");
    matrix_out->clear();

    std::cout << "------ Running Classic Without Transposing ------" << std::endl;
    runtimes.push_back(benchmark_hres([&] { matrix_mult_classic(matrix_a, matrix_b, matrix_out); }, benchmark_runs));
    std::cout << " + Result checksum: " << matrix_out->checksum() << std::endl
              << std::endl;
    checksums.push_back(matrix_out->checksum());
    idents.push_back("Classic Scalar");
    matrix_out->clear();

    std::cout << "------ Running Classic Pretransposed ------" << std::endl;
    runtimes.push_back(benchmark_hres([&] { matrix_mult_classic_pretransposed(matrix_a, matrix_b_t, matrix_out); }, benchmark_runs));
    std::cout << " + Result checksum: " << matrix_out->checksum() << std::endl
              << std::endl;
    checksums.push_back(matrix_out->checksum());
    idents.push_back("Classic Pretransposed");
    matrix_out->clear();

    std::cout << "< All checksums match: ";
    if (std::adjacent_find(checksums.begin(), checksums.end(), std::not_equal_to<my_base>()) == checksums.end()) {
        std::cout << "Yes.";
    } else {
        std::cout << "No.";
    }
    std::cout << " >" << std::endl
              << std::endl;

    std::stringstream ss;
    for (size_t i = 0; i < idents.size(); ++i) {
        ss << std::setw(std::max(static_cast<size_t>(8), static_cast<size_t>(idents[i].size()))) << idents[i] << "\t";
    }
    ss << std::endl;
    for (size_t i = 0; i < idents.size(); ++i) {
        ss << std::setw(std::max(static_cast<size_t>(8), static_cast<size_t>(idents[i].size()))) << runtimes[i] << "\t";
    }
    ss << std::endl << std::endl;

    std::cout << ss.str() << std::flush;
    delete matrix_a;
    delete matrix_b;
    delete matrix_out;
}

int main(void) {
    const size_t elem_count = 512;
    const size_t benchmark_runs = 5;

    std::vector<size_t> tvl_times;
    const size_t n = elem_count;
    const size_t m = elem_count;

    std::cout << "#### Running Matrix Multiplication with 'float' values ####" << std::endl;
    run_vecs<float>(elem_count, elem_count, benchmark_runs);

    std::cout << "#### Running Matrix Multiplication with 'double' values ####" << std::endl;
    run_vecs<double>(elem_count, elem_count, benchmark_runs);

    std::cout << "#### Running Matrix Multiplication with 'uint64_t' values ####" << std::endl;
    run_vecs<uint64_t>(elem_count, elem_count, benchmark_runs);
}
