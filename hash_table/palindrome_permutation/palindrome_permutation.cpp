#include "palindrome_permutation.hpp"

#include <array>
#include <numeric>

bool isPalindromePermutation(string s) {
    constexpr int size = 26;
    std::array<int, size> symbols{};
    for (const char symbol : s) {
        symbols[symbol - 'a'] = (symbols[symbol - 'a'] + 1) % 2;
    }

    return std::accumulate(symbols.begin(), symbols.end(), 0) <= 1;
}