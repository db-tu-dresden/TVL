#include <tvlintrin.hpp>
#include <string.h>
#include <cstdint>
#include <iostream>
#include <cmath>

template< typename T >
static T generate_pseudo_random_T() {
	/* Powered by https://stackoverflow.com/a/686373 */
	if constexpr( std::is_integral_v< T > ) {
		return static_cast < T > ( rand() ) / ( static_cast < T > ( RAND_MAX ) );
	} else {
		return static_cast < T > ( rand() ) / ( static_cast < T > ( RAND_MAX / 1000 ) );
	}
}

template< typename VE >
bool loadu_test( const typename VE::base_type* in, const size_t element_count ) {
	using namespace tvl;
	bool allOk = true;
	for ( size_t i = 0; i < element_count; i += VE::vector_element_count() ) {
		auto vec = loadu< VE >( &in[i] );
		allOk &= ( memcmp( &in[i], &vec, VE::vector_size_B() ) == 0 );
	}
	return allOk;
}

template< typename VE >
bool set1_test() {
	using namespace tvl;
	bool allOk = true;

	const size_t limit = std::min( (size_t) 4096, (size_t) std::numeric_limits< typename VE::base_type >::max() );
	for ( size_t i = 0; i < limit; ++i ) {
		auto vec = set1< VE >( i );
		for ( size_t j = 0; j < VE::vector_element_count(); j++ ) {
			allOk &= vec[j] == i;
		}
	}
	
	const auto maxval = std::numeric_limits< typename VE::base_type >::max();
	auto max_vec = set1< VE >( maxval );
	for ( size_t i = 0; i < VE::vector_element_count(); ++i ) {
		allOk &= max_vec[i] == maxval;
	}
	
	return allOk;
}

template< typename VE >
bool hadd_test() {
	using namespace tvl;
	bool allOk = true;
	const size_t limit = std::min( (size_t) 4096, (size_t) std::numeric_limits< typename VE::base_type >::max() / VE::vector_element_count() );
	for ( size_t i = 0; i < limit; ++i ) {
		auto vec = set1< VE >( i );
		auto res = hadd< VE >( vec );
		allOk &= res == VE::vector_element_count() * i;
	}
	return allOk;
}

template< typename VE >
bool add_test( const typename VE::base_type* in, const size_t element_count ) {
	/* For pairwise addition, this is sufficient. If sums over many elements 
		are necessary, one should resort to the Kahan summation:
		https://en.wikipedia.org/wiki/Kahan_summation_algorithm
	*/
	using namespace tvl;
	bool allOk = true;
	for ( size_t i = 0; i < element_count - VE::vector_element_count(); ++i ) {
		typename VE::base_type scalar_sanity = 0;
		for ( size_t j = i; j < i + VE::vector_element_count(); ++j ) {
			scalar_sanity += in[ j ];
		}

		auto vec = set1< VE >( 0 );
		auto elements = loadu< VE >( &in[i] );
		vec = add< VE >( vec, elements );
		const typename VE::base_type vec_sanity = hadd< VE >( vec );
		if constexpr( std::is_integral_v< typename VE::base_type > ) {
			allOk &= ( abs(scalar_sanity - vec_sanity) == std::numeric_limits< typename VE::base_type >::epsilon() );
		} else {
			allOk &= ( abs(scalar_sanity - vec_sanity) < std::numeric_limits< typename VE::base_type >::epsilon() );
		}
	}
	return allOk;
}

template< typename VE, typename T >
bool mul_test( const T* in, const size_t element_count ) {
	using namespace tvl;
	T scalar_sanity = 1;
	for ( size_t i = 0; i < element_count; ++i ) {
		scalar_sanity *= in[ i ];
	}
	auto vec = set1< VE >( 1 );
	for ( size_t i = 0; i < element_count; i += VE::vector_element_count() ) {
		auto elements = loadu< VE >( &in[i] );
		vec = add< VE >( vec, elements );
	}
	T vec_sanity = hadd< VE >( vec );

	return scalar_sanity == vec_sanity;
}

template< typename VE >
bool suite() {
	using namespace tvl;
	auto testOk = []( const bool& ok ) -> std::string { return ok ? "\033[0;32mOk\033[0m" : "\033[0;31mError\033[0m"; };
	auto testNative = []( const bool& ok ) -> std::string { return ok ? " (\033[0;32mNative\033[0m)" : " (\033[0;33mWorkaround\033[0m)"; };

	const size_t test_elem_count = 100;
	srand( static_cast< unsigned >( time( 0 ) ) );
	typename VE::base_type* test_vals = (typename VE::base_type*) aligned_alloc( VE::vector_alignment(), test_elem_count * sizeof(typename VE::base_type) );
	for ( size_t i = 0; i < test_elem_count; ++i ) {
		test_vals[i] = generate_pseudo_random_T< typename VE::base_type >();
	}

	bool allOk = true;
	std::cerr << "\tloadu:\t" << std::flush;
	allOk &= loadu_test< VE >( test_vals, test_elem_count );
	std::cerr << testOk( allOk ) << testNative( details::loadu_impl< VE, workaround >::native_supported() ) << std::endl;
 
	std::cerr << "\tset1:\t" << std::flush;
	allOk &= set1_test< VE >();
	std::cerr << testOk( allOk ) << testNative( details::set1_impl< VE, workaround >::native_supported() ) << std::endl;

	std::cerr << "\thadd:\t" << std::flush;
	allOk &= hadd_test< VE >();
	std::cerr << testOk( allOk ) << testNative( details::hadd_impl< VE, workaround >::native_supported() ) << std::endl;

	std::cerr << "\tadd:\t" << std::flush;
	allOk &= add_test< VE >( test_vals, test_elem_count );
	std::cerr << testOk( allOk ) << testNative( details::add_impl< VE, workaround >::native_supported() ) << std::endl;
	
	return allOk;
}

int main( int argc, const char** argv ) {
	using namespace tvl;
	bool allOk = true;
	
	std::cerr << "Testing Neon: uint8_t" << std::endl;
	allOk &= suite< simd< uint8_t, neon > >();
	
	std::cerr << "Testing Neon: uint16_t" << std::endl;
	allOk &= suite< simd< uint16_t, neon > >();
	
	std::cerr << "Testing Neon: uint32_t" << std::endl;
	allOk &= suite< simd< uint32_t, neon > >();

	std::cerr << "Testing Neon: uint64_t" << std::endl;
	allOk &= suite< simd< uint64_t, neon > >();

	std::cerr << "Testing Neon: float" << std::endl;
	allOk &= suite< simd< float, neon > >();

	std::cerr << "Testing Neon: double" << std::endl;
	allOk &= suite< simd< double, neon > >();
	
	return allOk ? 0 : 1;
}