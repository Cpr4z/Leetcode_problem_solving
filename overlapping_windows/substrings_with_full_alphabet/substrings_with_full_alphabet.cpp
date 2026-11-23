#include "substrings_with_full_alphabet.hpp"

#include <unordered_set>
#include <unordered_map>

int countCompleteSubstrings(string s) {
    std::unordered_set<char> unique_symbols(s.begin(), s.end());
    int unique_count = unique_symbols.size();
    int start = 0, end = -1;
    std::unordered_map<char, int> window;
    int result = 0;
    int window_symbols_count = 0;
    while (start < s.size()) {
        while (end + 1 < s.size() && window_symbols_count < unique_count) {
            ++end;
            ++window[s[end]];
            if (window[s[end]] == 1) {
                ++window_symbols_count;
            }
        }


        // Почему так?
        if (window_symbols_count == unique_count) {
            result += s.size() - end;
        }

        --window[s[start]];
        if (window[s[start]] == 0) {
            --window_symbols_count;
        }

        ++start;
    }

    return result;
}
