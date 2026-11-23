#include "ascending_sequence.hpp"

int findLength(vector<int> nums) {
    int max_length = 1;
    int counter = 1;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i - 1] < nums[i]) {
            ++counter;
        } else {
            counter = 1;
        }

        max_length = std::max(max_length, counter);
    }

    return max_length;
}
