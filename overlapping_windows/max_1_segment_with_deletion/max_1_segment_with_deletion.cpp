#include "max_1_segment_with_deletion.hpp"

// 0 1 1 1 1 0 0 1 1 1 1 1
int maxOnesAfterDeletions(vector<int> nums) {
    int total_count = 0;
    bool has_zero {false};
    int current = 0, prev = 0;
    for (int num : nums) {
        if (!num) {
            has_zero = true;
            prev = current;
            current = 0;
        } else {
            ++current;
        }

        total_count = std::max(total_count, current + prev);
    }

    return has_zero ? total_count: total_count - 1;
}

int maxOnesAfterDeletions2(vector<int> nums) {
    int start = 0, end = -1;
    int zeroes_count = 0;
    int result = 0;
    while (start < nums.size()) {
        while (end + 1 < nums.size() && (nums[end + 1] == 1 || zeroes_count < 1)) {
            zeroes_count += nums[end + 1] == 0 ? 1 : 0;
            ++end;
        }

        result = std::max(result, end - start);
        zeroes_count -= (int)nums[start] == 0;
        ++start;
    }

    return result;
}

int maxOnesAfterDeletions3(vector<int> nums) {
    int start = 0, end = -1;
    int zeroes_count = 0;
    int zero_index = 0;
    int result = 0;
    while (start < nums.size()) {
        while (end + 1 < nums.size() && (nums[end + 1] == 1 || zeroes_count < 1)) {
            if (nums[end + 1] == 0) {
                ++zeroes_count;
                zero_index = end + 1;
            }
            ++end;
        }

        result = std::max(result, end - start);
        zeroes_count = 0;
        start = std::max(start + 1, zero_index + 1);
    }

    return result;
}