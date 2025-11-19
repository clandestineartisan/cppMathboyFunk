//
// Created by Raphael Barrera on 11/15/25.
//
#include "clandesitne/core.hpp"

#include <cstddef>
#include <cstdint>

namespace clandesitne::core {
	std::uint64_t fibonacci(std::size_t index) {
		if (index == 0) return 0; // obviously the origin of the sequence is 0
		// incase the index = 0, in order to avoid declaring unnecessary variables...
		// ...we declare the variables after the IF statement
		std::uint64_t a = 0;
		std::uint64_t b = 1;

		// incase the index = 1, we skip the for loop...
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
}