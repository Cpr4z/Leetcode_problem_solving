#include "longest_stock_growth.hpp"

int longestStockGrowth(vector<int> nums) {
    int start = 0, end = 0;
    int result = 0;
    while (start < nums.size()) {
        while (end + 1 < nums.size() && nums[end] == nums[end + 1]) {
            ++end;
        }

        if (nums[end] == 1) {
            result = std::max(result, end - start + 1);
        }

        start = end + 1;
        end = end + 1;
    }

    return result;
}
