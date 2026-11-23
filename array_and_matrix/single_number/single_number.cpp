#include "single_number.hpp"

int singleNumber(vector<int>& nums) {
    // linear complexity
    // O(1) extra space
    int result = 0;
    for (const auto num : nums) {
        result ^= num;
    }

    return result;
}
