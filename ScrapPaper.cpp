#include <iostream>
#include <cstddef>
#include <cstdint>

#include "clandesitne/core.hpp"
using namespace clandesitne::core;

int main() {
std::uint64_t index;

	std::cout << "Return what index in the fibonacci sequence?: ";
	std::cin >> index;
	std::cout << fibonacci(index);

	return 0;
}
