#include "reverse_vowels.hpp"

#include <unordered_set>

string reverseVowels(string s) {
    int p1 = 0, p2 = (int)s.size() - 1;
    std::unordered_set<char> vowels {'e', 'o', 'a', 'u', 'i'};
    while (p1 < p2) {
        if (!vowels.contains(s[p1])) {
            ++p1;
        } else if (!vowels.contains(s[p2])) {
            --p2;
        } else {
            std::swap(s[p1], s[p2]);
            ++p1;
            --p2;
        }
    }

    return s;
}