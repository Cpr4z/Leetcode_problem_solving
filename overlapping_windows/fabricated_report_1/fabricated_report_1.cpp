#include "fabricated_report_1.hpp"

// [1, 1, 0, 1, 1]

int longestStockGrowth1(vector<int> nums) {
    int max_count = 0;
    int current = 0;
    int prev = 0;
    for (int num: nums) {
        if (num == 0) {
            prev = current;
            current = 0;
        } else {
            ++current;
        }

        max_count = std::max(max_count, current + prev + 1);
    }

    return std::min(max_count, (int)nums.size());
}

// [0 ,0, 0, 0]

int longestStockGrowth2(vector<int> nums) {
    int start = 0;
    int end = -1;
    int max_growth = 0;
    int last_zero_pos = -1;
    bool has_zero {false};
    while (start < nums.size()) {
        while (end + 1 < nums.size() && (nums[end + 1] == 1 || !has_zero)) {
            if (nums[end + 1] == 0) {
                last_zero_pos = end + 1;
                has_zero = true;
            }

            ++end;
        }

        max_growth = std::max(max_growth, end - start + 1);
        start = last_zero_pos;
        has_zero = false;
    }

    return max_growth;
}