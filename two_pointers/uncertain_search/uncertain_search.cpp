#include "uncertain_search.hpp"

// m - размер строки t
// Время О(m)
// Память O(1)
bool fuzzyMatch(string s, string t) {
    int p1 = 0, p2 = 0;
    while (p1 < s.size() && p2 < t.size()) {
        if (s[p1] == t[p2]) {
            ++p1;
        }
        ++p2;
    }
    return p1 == s.size();
}