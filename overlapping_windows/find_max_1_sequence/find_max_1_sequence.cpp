#include "find_max_1_sequence.hpp"

int longestConsecutiveOnes(const vector<int>& nums) {
    int max_count = 0;
    int current = 0;
    for (int num : nums) {
        if (num) {
            current += 1;
            max_count = std::max(max_count, current);
        } else {
            current = 0;
        }
    }

    return max_count;
}

// 1,1,0,0,1,1,1,0
int longestConsecutiveOnes2(const vector<int>& nums) {
    int l = 0, r = 0;
    int max_count = 0;
    while (l < nums.size()) {
        while (r + 1 < nums.size() && nums[r] == nums[r + 1]) {
            ++r;
        }

        if (nums[r] == 1) {
            max_count = std::max(max_count, r - l + 1);
        }

        l = r + 1;
        ++r;
    }

    return max_count;

}
