cmake_minimum_required(VERSION 4.0)
project(cppMathboyFunk)

set(CMAKE_CXX_STANDARD 20)

# ————————————————————————
# 1. Create library target
# ————————————————————————
add_library(clandesitne_toolbox
        # add .cpp files here
        src/algo.cpp
        src/core.cpp
        src/crypto.cpp
        src/linear.cpp
        src/primes.cpp
        src/stats.cpp
        src/tcg.cpp
        src/util.cpp
)

# ——————————————————————————————————————————————————————————————————————————
# 2. Tell the library where to find your headers (include/clandesitne/*.hpp)
# ——————————————————————————————————————————————————————————————————————————
target_include_directories(clandesitne_toolbox PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# ———————————————————————————————————————————————————————————————
# 3. This is how you properly implement the "main.cpp" executable
# ———————————————————————————————————————————————————————————————
add_executable(ScrapPaper ScrapPaper.cpp)
# Link your library to your executable
target_link_libraries(ScrapPaper PRIVATE clandesitne_toolbox)

#
#
#
# —————————————————————
# 4. Add Catch2 testing
# —————————————————————

# "Enable the feature that lets us download external libraries."
# "Go fetch this code from the internet and add it to the build."
include(FetchContent)

# Here's how to download Catch2
FetchContent_Declare(
        Catch2 # name of what we're downloading
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git # where it lives
        GIT_TAG v3.5.2 # the version we're downloading
) # “Hey CMake, go get Catch2 from GitHub at this version.”

# “Actually download and integrate Catch2 now.”
FetchContent_MakeAvailable(Catch2)
# Fetch, Build, and Make it available to the project

# Only want one test executable
add_executable(tests
        tests/test_core.cpp
)
# Linking the libraries to the tests executable :p
target_link_libraries(tests PRIVATE
        clandesitne_toolbox #
        Catch2::Catch2WithMain # allows me to just test my code without recreating a main() function
)

include(CTest) # “Enable CMake’s testing system." CMake’s built-in test runner.
include(Catch) # "Enable Catch2’s helper functions."
    # This gives us catch_discover_tests, which finds all TEST_CASEs automatically.
catch_discover_tests(tests)
    # “Look inside the tests executable
    # find all the test cases
    # register them with CMake
    # and run them when I say ‘Run tests’.”
        #