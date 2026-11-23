#include "convolution_into_ranges.hpp"

string counterRanges(vector<int> nums) {
    // Время: O(n log(n)) + O(n) = O(n log(n))
    // Память: O(2n - 1) = O(n)
    std::sort(nums.begin(), nums.end());
    std::string result;
    int start = 0, end = 0;
    while (start < nums.size()) {
        while (end + 1 < nums.size() && nums[end] + 1 == nums[end + 1]) {
            ++end;
        }

        if (!result.empty()) {
            result += ",";
        }

        if (start == end) {
            result += std::to_string(nums[start]);
        } else {
            result += std::to_string(nums[start]) + "-" + std::to_string(nums[end]);
        }

        start = end + 1;
        ++end;
    }

    return result;
}
