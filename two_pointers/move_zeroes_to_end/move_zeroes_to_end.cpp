#include "move_zeroes_to_end.hpp"


// Ввод: nums = [2,1,0,0,4,0,9]

// [2,1,0,0,4,0,9]
// [2,1,4,0,0,0,9]

vector<int> moveZeros(vector<int>& nums) {
    int p1 = 0, p2 = 0;
    while (p2 < nums.size()) {
        if (nums[p2]) {
            std::swap(nums[p2], nums[p1]);
            ++p1;
        }
        ++p2;
    }

    return nums;
}
