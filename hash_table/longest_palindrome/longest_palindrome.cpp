#include "longest_palindrome.hpp"

#include <unordered_set>

int findPalindromeLength(string s) {
    std::unordered_set<char> symbols;
    int result = 0;
    for (char symbol : s) {
        if (symbols.contains(symbol)) {
            result += 2;
            symbols.erase(symbol);
        } else {
            symbols.insert(symbol);
        }
    }

    return result + (symbols.empty() ? 0 : 1);
}