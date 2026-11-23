#include "coding_repeats.hpp"


vector<char> compress(vector<char> chars) {
    int start = 0, end =0;
    std::vector<char> result;
    while (start < chars.size()) {
        while (end + 1 < chars.size() && chars[end] == chars[end + 1]) {
            ++end;
        }

        char symbol = chars[end];
        result.push_back(symbol);
        int count = end - start + 1;
        if (count > 1) {
            for (char digit : std::to_string(count)) {
                result.push_back(digit);
            }
        }

        start = end + 1;
        ++end;
    }

    return result;
}