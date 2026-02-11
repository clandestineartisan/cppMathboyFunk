//
// Created by Raphael Barrera on 11/15/25.
//
#include "clandesitne/core.hpp"

#include <cstdlib>
#include <cmath>
#include <cstddef>
#include <cstdint>

namespace clandesitne::core {
	/* ———————— Basic Integer Utilities ————————
	 *
	 */
	int sign(std::int64_t x) {
		if (x > 0) return 1; // if 'x' is greater than 0, then 'x' is positive
		if (x < 0) return -1; // if 'x' is less than 0, then 'x' is negative
		return 0; // otherwise, 'x' is equal to zero
	}



	std::int64_t gcd(std::int64_t a, std::int64_t b) {
		// do i look for prime numbers first? no, prime factorization would take too long (heavy process)
		// instead we'll be using remainders, or modulus, a (mod b)

		// either way, first check if either integer is 0 or 1
		if (a == 0 || b == 0) { // if either 'a' or 'b' equal 0...
			return 0; // ...then return 0, to indicate that at least one of the integers is 0.
		} else if (a == 1 || b == 1) { // but if either 'a' or 'b' equal 1...
			return 1; // ...then the only common divisor can be 1.
		} // should neither integer be 0 nor 1, we continue

		// for the execution of the code, only use absolute numbers
			// will explain why later?
		if (a < 0) { // if 'a' is a neg # then the following is how we would get the absolute value
			a = -(a); // -(a) = -(-#) = +#
		} // but we have a function for the abs value using...
		b = abs(b); // ...abs(b), #include <cstdlib> to use with integers, #include <cmath> if using with floaters
		// under the hood -> return ( (b < 0) ? -b : b )

		// enter chunk of code under here for now
		std::int64_t r = 0; // we're instantiating the remainder ahead of time, in case 'b' is greater than 'a'
		// first check which value's absolute is greater
		if (b > a) { // if be is greater, we'll switch around the values to avoid changing the rest of the code
			r = a; // 'r' stores 'a' temporarily
			a = b; // 'a' is now 'b' (effectively swapping 'a' w/ 'b')
			b = r; // and 'b' is now 'a'
		}
		r = 0; // this is just to reset the remainder to when we originally declared it... should i tho?

		while (b != 0) { // until the remainder (r) is 0
			r = a % b; // r = a (mod b) OR equals the remainder after 'a' is divided by 'b'
			a = b; //
			b = r; //
		}


	}



	std::int64_t lcm(std::int64_t a, std::int64_t b) {

	}

	/* ———————— Digit/Number Utilities ————————
	 *
	 */
	std::size_t countDigits(std::uint64_t n) {

	}
	std::uint64_t reverseDigits(std::uint64_t n) {

	}
	std::uint64_t digitSum(std::uint64_t n) {

	}
	bool isPalindrome(std::uint64_t n) {

	}

	/* ———————— Factorials & Basic Combinatorics ————————
	 *
	 */
	std::int64_t factorial(std::int64_t n) {

	}

	std::int64_t permutations(std::int64_t n, std::int64_t r) {

	}

	std::int64_t combinations(std::int64_t n, std::int64_t r) {

	}

	/* ———————— Fibonacci Family ————————
	 *
	 */
	std::uint64_t fibonacci(std::size_t index) {
		if (index == 0) return 0; // obviously the origin of the sequence is 0
		// in case the index = 0, in order to avoid declaring unnecessary variables...
		// ...we declare the variables after the IF statement
		std::uint64_t a = 0;
		std::uint64_t b = 1;

		// in case the index = 1, we skip the for loop...
		for (std::size_t i = 1; i < index; i++) { // ...and just return b, which already equals 1
			std::uint64_t total = a + b; // otherwise, this total will be the total of the previous two indexes
			// e.g. index 2 = 0 + 1 = 1

			// ps: we create "total" in the for loop for the same reason 'a' and 'b' are after the IF statement...
			// ...unless the index >= 2, adding is unnecessary; therefore, the variable "total" is also unnecessary

			// even though we don't have to shift 'a' to 'b' for index 2...
			a = b; // ...we have to shift it for every index that comes after anyway. an IF statement is unnecessary.
			b = total; // 'b' gets updated to the new total aka the index's number
		}

		return b; // return the number at the given index
	}

	std::uint64_t fibonacciFastDoubling(std::size_t index) {

	}

	std::uint64_t fibonacciModuloM(std::size_t index, std::uint64_t modulus) {

	}

	/* ———————— Modular Arithmetic Basics ————————
	 *
	 */
	std::uint64_t modAdd(std::uint64_t a, std::uint64_t b, std::uint64_t mod_m) {

	}
	std::uint64_t modSub(std::uint64_t a, std::uint64_t b, std::uint64_t mod_m) {

	}
	std::uint64_t modMul(std::uint64_t a, std::uint64_t b, std::uint64_t mod_m) {

	}
	std::uint64_t modPow(std::uint64_t base, std::uint64_t exp, std::uint64_t mod_m) {

	}
}