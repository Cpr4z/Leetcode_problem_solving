#include "count_of_indexes_couple.hpp"

#include <unordered_set>

int countingPairs(string s) {
    int start = 0, end = -1;
    int result = 0;
    std::unordered_set<char> window;
    while (start < s.size()) {
        while (end + 1 < s.size() && (window.find(s[end + 1]) == window.end())) {
            window.insert(s[end + 1]);
            ++end;
        }

        result += end - start + 1;
        window.erase(s[start]);
        ++start;
    }

    return result;
}