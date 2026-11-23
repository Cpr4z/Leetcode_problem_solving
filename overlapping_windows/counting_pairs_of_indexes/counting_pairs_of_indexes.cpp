#include "counting_pairs_of_indexes.hpp"

#include <unordered_map>
#include <unordered_set>

//Ввод: s = "a"
//Вывод: 1

//Ввод: s = "aba"
//Вывод: 5

// "aba"
// a
// b
// a
// ab
// ba

//Ввод: s = "baab"
//Вывод: 6

int countingPairs(string s) {
    int start = 0, end = -1;
    int result = 0;
    std::unordered_set<char> window;
    while (start < s.size()) {
        while (end + 1 < s.size() && !window.contains(s[end + 1])) {
            window.insert(s[end + 1]);
            ++end;
        }

        result += end - start + 1;
        window.erase(s[start]);
        ++start;
    }

    return result;
}