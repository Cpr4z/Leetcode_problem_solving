#include "isomorphic_strings.hpp"

#include <unordered_map>

// s - "ab"
// t - "aa"

// a -> a
// a -> a
// a -> b (такого быть не может так как уже установлено соотношение a -> a)
bool isIsomorphic(string s, string t ) {
    // n - число символах в строках s и t
    // Память: O(1)
    std::unordered_map<char, char> s_map, t_map;
    // Время: (n)
    for (int i = 0; i < s.size(); ++i) {
        if (s_map.find(s[i]) != s_map.end() && s_map[s[i]] != t[i]) {
            return false;
        }

        if (t_map.find(t[i]) != t_map.end() && t_map[t[i]] != s[i]) {
            return false;
        }

        s_map[s[i]] = t[i];
        t_map[t[i]] = s[i];
    }

    return true;
}
