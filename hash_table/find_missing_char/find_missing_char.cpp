#include "find_missing_char.hpp"

char findMissingChar(string s, string t) {
    int sum_s = 0, sum_t = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (i < s.size() - 1) {
            sum_t += (int)t[i];
        }

        sum_s += (int)s[i];
    }

    return (char)(sum_s - sum_t);
}