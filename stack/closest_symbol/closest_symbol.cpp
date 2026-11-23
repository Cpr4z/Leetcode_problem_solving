#include "closest_symbol.hpp"

vector<int> findClosest(string s, char ch) {
    int n = s.size();
    std::vector<int> result(n, 0);
    int last_pos = -n;
    for (int i = 0; i < n; ++i) {
        if (ch == s[i]) {
            last_pos = i;
        }

        result[i] = i - last_pos;
    }

    last_pos = 2 * n;
    for (int i = n - 1; i >= 0; --i) {
        if (ch == s[i]) {
            last_pos = i;
        }

        result[i] = std::min(result[i], last_pos - i);
    }

    return result;
}
