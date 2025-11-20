//
// Created by Raphael Barrera on 11/15/25.
//

#ifndef CPPMATHBOYFUNK_CORE_HPP
#define CPPMATHBOYFUNK_CORE_HPP

#include <cstddef> // std::t_size
#include <cstdint>

namespace clandesitne::core {
	/* ———————— Basic Integer Utilities ————————
	 *
	 */

	/**
	 * @brief computes the sign of an integer
	 * @param x the integer to evaluate
	 * @return an integer as either {-1,0,1} to represent its sign
	 */
	int sign(std::int64_t x);

	/**
	 * @brief Greatest Common Divisor
	 *
	 * The GCD is the largest possible integer that divides both numbers without leaving a remainder.
	 *
	 * @param a first integer
	 * @param b second integer
	 * @return the greatest common divisor, or 0 if either is 0
	 */
	std::int64_t gcd(std::int64_t a, std::int64_t b);

	/**
	 * @brief Lowest Common Multiple
	 *
	 * The LCM is the smallest common integer that is divisible by both numbers
	 *
	 * @param a first integer
	 * @param b second integer
	 * @return the least common multiple, or 0 if either is 0
	 */
	std::int64_t lcm(std::int64_t a, std::int64_t b);

	/* ———————— Digit/Number Utilities ————————
	 * Apparently these are common algorithms that are useful for number puzzles, number theory, and even TCG
	 */
	std::size_t countDigits(std::uint64_t n);
	std::uint64_t reverseDigits(std::uint64_t n);
	std::uint64_t digitSum(std::uint64_t n);
	bool isPalindrome(std::uint64_t n);

	/* ———————— Factorial & Basic Combinatorics ————————
	 *
	 */
	/**
	 * @brief
	 * @param n
	 * @return
	 */
	std::int64_t factorial(std::int64_t n);

	/**
	 * @brief The number of different combinations of a set, where order matters
	 * @param n
	 * @param r
	 * @return
	 */
	std::int64_t permutations(std::int64_t n, std::int64_t r);

	/**
	 * @brief The number of different combination of a set, when order doesn't matter
	 * @param n
	 * @param r
	 * @return
	 */
	std::int64_t combinations(std::int64_t n, std::int64_t r);


	/* ———————— Fibonacci Family ————————
	 * These are three ways to return the number at a given index of the fibonacci sequence
	 */

	/**
	 * @brief O(n) Iterative Fibonacci
	 * @param index the number I'm looking for
	 * @return the number at the given index of the fibonacci sequence
	 */
	std::uint64_t fib(std::size_t index);

	/**
	 * @brief O(log(n)) Fibonacci Fast Doubling
	 * @param index
	 * @return
	 */
	std::uint64_t fibFastD(std::size_t index);

	/**
	 * @brief O(log(n)) Fibonacci Modulo M
	 * @param index
	 * @param modulus
	 * @return
	 */
	std::uint64_t fibModM(std::size_t index, std::uint64_t modulus);

	/* ———————— Modular Arithmetic Basics ————————
	 *
	 */
	/**
	 * @brief (a + b) mod m
	 * @param a
	 * @param b
	 * @param mod_m
	 * @return
	 */
	std::uint64_t modAdd(std::uint64_t a, std::uint64_t b, std::uint64_t mod_m);

	/**
	 * @brief (a - b) mod m
	 * @param a
	 * @param b
	 * @param mod_m
	 * @return
	 */
	std::uint64_t modSub(std::uint64_t a, std::uint64_t b, std::uint64_t mod_m);

	/**
	 * @brief (a * b) mod m
	 * @param a
	 * @param b
	 * @param mod_m
	 * @return
	 */
	std::uint64_t modMul(std::uint64_t a, std::uint64_t b, std::uint64_t mod_m);

	/**
	 * @brief (base^exp) mod m
	 * @param base
	 * @param exp
	 * @param mod_m
	 * @return
	 */
	std::uint64_t modPow(std::uint64_t base, std::uint64_t exp, std::uint64_t mod_m);
}

#endif //CPPMATHBOYFUNK_CORE_HPP