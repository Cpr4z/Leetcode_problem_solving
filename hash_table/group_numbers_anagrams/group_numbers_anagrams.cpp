#include "group_numbers_anagrams.hpp"

#include <unordered_map>

// n - кол-во чисел
vector<vector<int>> digitPermutation(vector<int> nums) {
    vector<vector<int>> result;
    if (nums.empty()) {
        return result;
    }

    // O(n)
    unordered_map<string, vector<int>> table;
    constexpr size_t array_size = 9;
    std::array<int, array_size> numbers{};
    for (int num : nums) {
        const std::string str_num = std::to_string(num);
        for (char digit : str_num) {
            int index = digit - '1';
            if (index >= 0) {
                ++numbers[index];
            }
        }

        std::string key;
        for (size_t i = 0; i < array_size; ++i) {
            key += "#" + std::to_string(numbers[i]);
            numbers[i] = 0;
        }

        table[key].push_back(num);
    }

    for (auto& [_, group] : table) {
        result.emplace_back(std::move(group));
    }

    return result;
}

vector<vector<int>> digitPermutation2(vector<int> nums) {
    vector<vector<int>> result;
    if (nums.empty()) {
        return result;
    }

    std::unordered_map<std::string, std::vector<int>> table;
    for (int num : nums) {
        std::string num_str;
        for (char symbol : std::to_string(num)) {
            if (symbol != '0') {
                num_str += symbol;
            }
        }

        std::sort(num_str.begin(), num_str.end());
        table[num_str].push_back(num);
    }

    for (auto& [_, group] : table) {
        result.emplace_back(std::move(group));
    }

    return result;
}