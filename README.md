readME bebee

2025-NOV-16
Created the basic folder structure for headers, sources files, and test files, as well creating the files.
The CMakeLists.txt file was properly setup to link them all and run the tests. This README was pulled from GitHub prior
to committing. Lastly, the main.cpp where are the manual testing will be done was renamed to ScrapPaper.cpp LOL Get it?
:p

Libraries Being Used
<cstdint>
std::int8_t			like a signed char
std::int16_t			short
std::int32_t			int
std::int64_t			long long
std::uint8_t			unsigned

std::int_fast8_t		at least 'n' bits, but optimized for speed
std::uint_fast8_t		unsigned
std::int_least8_t	    at least 'n' bits, but smallest memory
std::uint_least8_t		unsigned

std::intmax_t		max integer size
std::uintmax_t		unsigned
    used for situations where you want the largest integer type the platform supports

std::intptr_t		integer guaranteed big enough to hold a pointer
std::uintptr_t		unsigned
    These matter whenever you’re doing low-level memory, crypto, or serialization work.