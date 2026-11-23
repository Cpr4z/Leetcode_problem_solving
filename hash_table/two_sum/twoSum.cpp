#include "twoSum.hpp"

#include <map>

std::vector<int> two_sum(const std::vector<int>& arr, int target) {
    if (arr.size() < 2) {
        return {};
    }

    // Память O(n)
    std::unordered_map<int, int> reflection{};
    // Сложность O(n)
    for (int i = 0; i < arr.size(); ++i) {
        const int value = arr[i];
        // Сложность O(1)
        const auto it = reflection.find(target - value);
        if (it != reflection.end()) {
            return {it->second, i};
        }

        // Сложность O(1)
        reflection.emplace(value, i);
    }

    return {};
}


std::pair<int, int> two_sum2(const std::vector<int>& arr, int target) {
    std::unordered_map<int, int> reflection;
    // O(n)
    // Память O(n)
    for (size_t i = 0; i < arr.size(); ++i) {
        reflection[arr[i]] = i;
    }

    // O(n)
    for (size_t i = 0; i < arr.size(); ++i) {
        const auto it = reflection.find(target - arr[i]);
        if (it != reflection.end() && (i != it->second)) {
            return {i, it->second};
        }
    }

    return {};
}
