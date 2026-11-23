#include "combinations_sum.hpp"

#include <unordered_set>
#include <set>

void bruteforce(int current_sum, int target, int index, vector<vector<int>>& result, vector<int>& combination, vector<int>& nums) {
    if (current_sum == target) {
        result.push_back(combination);
        return;
    }

    if (current_sum > target || index >= nums.size()) {
        return;
    }

    bruteforce(current_sum, target, index + 1, result, combination, nums);
    combination.push_back(nums[index]);
    bruteforce(current_sum + nums[index], target, index, result, combination, nums);
    combination.pop_back();
}

vector<vector<int>> combinations(vector<int> nums, int x) {
    std::set<int> unique(nums.begin(), nums.end());
    nums = std::vector<int>(unique.begin(), unique.end());
    vector<vector<int>> allCombinations;
    vector<int> combination;
    bruteforce(0, x, 0, allCombinations, combination, nums);
    return allCombinations;
}
