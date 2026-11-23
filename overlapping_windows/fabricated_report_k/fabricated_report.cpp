#include "fabricated_report.hpp"


int longestStockGrowth(vector<int> nums, int k) {
    int start = 0, end = -1;
    int zeroes_count = 0;
    int result = 0;
    while (start < nums.size()) {
        while (end + 1 < nums.size() && (nums[end + 1] == 1 || zeroes_count < k)) {
            zeroes_count += (int)nums[end + 1] == 0 ? 1 : 0;
            ++end;
        }

        result = std::max(result, end - start + 1);
        zeroes_count -= (int)nums[start] == 0 ? 1 : 0;
        ++start;
    }

    return result;
}
