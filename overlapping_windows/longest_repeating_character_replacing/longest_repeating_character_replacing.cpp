#include "longest_repeating_character_replacing.hpp"

#include <array>

int characterReplacement(string s, int k) {
    constexpr int array_size = 26;
    std::array<int, array_size> alphabet {};
    int left = 0;
    int right = 0;
    int max_freq = 0;
    int max_len = 0;
    while (right < s.size()) {
        ++alphabet[s[right] - 'A'];
        max_freq = std::max(max_freq, alphabet[s[right] - 'A']);
        if (right - left - max_freq >= k) {
            --alphabet[s[left] - 'A'];
            ++left;
        }

        max_len = std::max(max_len, right - left + 1);
        ++right;
    }

    return max_len;
}
