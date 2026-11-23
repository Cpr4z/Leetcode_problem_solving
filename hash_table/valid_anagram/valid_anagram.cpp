#include "valid_anagram.hpp"

#include <unordered_map>
#include <array>

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }

    std::unordered_map<int, int> map;
    // Память O(n)
    // Сложность O(n * 1) = O(n)
    for (size_t i = 0; i < s.size(); ++i) {
        ++map[static_cast<int>(s[i])];
        --map[static_cast<int>(t[i])];
    }

    // Сложность O(n)
    return std::ranges::all_of(map, [](const auto& element){
        return !element.second;
    });
}

bool isAnagram2(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }

    constexpr int size = 26;
    std::array<int, size> count{};
    for (int i = 0; i < s.size(); ++i) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i  = 0; i < size; ++i) {
        if (count[i]) {
            return false;
        }
    }

    return true;
}
