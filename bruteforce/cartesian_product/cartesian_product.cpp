#include "cartesian_product.hpp"

void bruteforce(int index, std::vector<int>& combination, std::vector<std::vector<int>>& nums, std::vector<std::vector<int>>& result) {
    if (index == nums.size()) {
        result.push_back(combination);
        return;
    }

    for (int num : nums[index]) {
        combination.push_back(num);
        bruteforce(index + 1, combination, nums, result);
        combination.pop_back();
    }
}

vector<vector<int>> cartesianProduct(vector<vector<int>> nums) {
    std::vector<std::vector<int>> result;
    std::vector<int> combination;
    bruteforce(0, combination, nums, result);
    return result;
}
