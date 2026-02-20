readME bebee

# MathboyFunk
>Insert Description here... A Modular C++ library of reusable Mathematical functions and utilities. Designed for
learning, experimentation, and long-term expansion.
> Strong verbs. Short sentences.

> [!NOTE]
> Just want to see what this looks like on GitHub

<!--This is how you add a hidden comment on the README FILE. Add hidden comments here.-->

> [!NOTE]
> General info

> [!TIP]
> Helpful advice

> [!IMPORTANT]
> Critical information

> [!WARNING]
> Risk or caution

> [!CAUTION]
> Serious warning

##### Features
- Modular Math Functions
- Reusable Code Structure
- Clean Namespace Organization
- Beginner to Advance Scalability
##### Technologies
- C++
- Standard Template Library
- JetBrains CLion
##### Project Structure
```bash
cppMathboyFunk/
│── include/
│── src/
│── tests/
│── README.md
│── ScrapPaper.cpp
```
##### Usage
_What should I be inserting here..?_
##### Goals
- Build a personal Math library
- Improve C++ proficiency
- Support future projects (e.g. cryptography, simulations, etc.)
- Improve at writing Proofs for the digital world
###### Author
Raphael "clandesitne" Barrera

---
## General Updates
###### 2025-NOV-16
Created the basic folder structure for headers, sources files, and test files, as well creating the files.
The **CMakeLists.txt** file was properly setup to link them all and run the tests. This README was pulled from GitHub prior
to committing. Lastly, the main.cpp where are the manual testing will be done was renamed to ScrapPaper.cpp LOL Get it?
:p

## Core
## Basic Integer Utilities
###### int sign(std::int64_t x)

###### std::int64_t gcd(std::int64_t a, std:: int64_t b)
Greatest Common Divisor

Do I need to look for primes first? No. While prime factorization works, the computation takes way too long once you
start looking for the Greatest Common Divisor for larger numbers.
How do I approach a fast method then? Look into remainders.

Using remainders to find the GCD is apparently the **heart** of Euclidean Algorithm.  
I lowkey don't know what this means...

# Libraries Being Used
```cpp
// Get used to using these integer types.
#include <cstdint>

int main() {

std::int8_t //like a signed char
std::int16_t //short
std::int32_t //int
std::int64_t //long long
std::uint8_t //unsigned

std::int_fast8_t //at least 'n' bits, but optimized for speed <br>
std::uint_fast8_t //unsigned <br>

std::int_least8_t //at least 'n' bits, but smallest memory <br>
std::uint_least8_t //unsigned

std::intmax_t //max integer size
std::uintmax_t //unsigned
//used for situations where you want the largest integer type the platform supports

std::intptr_t //integer guaranteed big enough to hold a pointer
std::uintptr_t //unsigned
//These matter whenever you’re doing low-level memory, crypto, or serialization work.
}
```
here we gooo