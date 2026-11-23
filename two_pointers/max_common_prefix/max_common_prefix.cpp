#include "max_common_prefix.hpp"

string longestCommonPrefix(vector<string> strs) {
    int min_size = INT_MAX;
    for (const auto& str : strs) {
        min_size = std::min(min_size, (int)str.size());
    }

    for (int i = 0; i < min_size; ++i) {
        const char symbol = strs[0][i];
        for (const auto& str : strs) {
            if (str[i] != symbol) {
                return strs[0].substr(0, i);
            }
        }
    }

    return strs[0].substr(0, min_size);
}