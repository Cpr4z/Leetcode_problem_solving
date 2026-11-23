#include "is_similar_strings.hpp"

bool isSimilar(string s, string t) {
    if (std::abs((int)s.size() - (int)t.size()) > 1) {
        return false;
    }

    bool has_mismatch{false};
    int p1 = 0, p2 = 0;

    // n - длина s
    // m - длина t

    // Память O(1)
    // Время O(max(m, n))
    while (p1 < s.size() && p2 < t.size()) {
        if (s[p1] == t[p2]) {
            ++p1;
            ++p2;
            continue;
        }

        if (has_mismatch) {
            return false;
        }

        has_mismatch = true;
        if (s.size() < t.size()) {
            ++p1;
        } else if (s.size() > t.size()) {
            ++p2;
        } else {
            ++p2;
            ++p1;
        }
    }

    return true;
}
