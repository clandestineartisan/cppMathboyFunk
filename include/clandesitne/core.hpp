//
// Created by Raphael Barrera on 11/15/25.
//

#ifndef CPPMATHBOYFUNK_CORE_HPP
#define CPPMATHBOYFUNK_CORE_HPP

#include <cstddef> // std::t_size
#include <cstdint>

namespace clandesitne::core {
	/**
	 * @brief O(n) Iterative Fibonacci
	 * @param index the number I'm looking for
	 * @return the number at the given index of the fibonacci sequence
	 */
	std::uint64_t fibonacci(std::size_t index);

	/**
	 * @brief O(log(n)) TBA
	 * @param index
	 * @return
	 */
	std::uint64_t fibonacciFastDoubling(std::size_t index);

	/**
	 * @brief O(log(n)) TBA
	 * @param index
	 * @param modulus
	 * @return
	 */
	std::uint64_t fibonacciModuloM(std::size_t index, std::uint64_t modulus);
}

#endif //CPPMATHBOYFUNK_CORE_HPP