#include "first_unique_symbol.hpp"

#include <unordered_map>

int findFirstUniqueCharacter(string s) {
    std::unordered_map<char, int> count;
    for (char ch : s) {
        if (count.find(ch) == count.end()) {
            count[ch] = 0;
        }

        ++count[ch];
    }

    for (int i = 0; i < s.size(); ++i) {
        if (count[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}