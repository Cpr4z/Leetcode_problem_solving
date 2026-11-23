#include "strings_compare.hpp"

int findNextSymbolPos(const std::string& str, int index) {
    int skip_count = 0;
    while (index >= 0 && (skip_count > 0 || str[index] == '#')) {
        if (str[index] == '#') {
            index--;
            skip_count++;
            continue;
        }

        index--;
        skip_count--;
    }

    return index;
}

bool compare(string s, string t) {
    int p1 = s.size(), p2 = t.size();
    while (p1 >= 0 && p2 >= 0) {
        p1 = findNextSymbolPos(s, p1 - 1);
        p2 = findNextSymbolPos(t, p2 - 1);
        if (p1 < 0 || p2 < 0) {
            return p1 < 0 && p2 < 0;
        }

        if (s[p1] != t[p2]) {
            return false;
        }
    }

    return true;
}