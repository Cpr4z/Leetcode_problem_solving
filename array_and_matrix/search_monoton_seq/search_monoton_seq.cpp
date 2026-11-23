#include "search_monoton_seq.hpp"

vector<int> searchMonoton(vector<int> nums) {
    int max_length = 1;
    int asc_len = 1;
    int des_len = 1;
    std::vector<int> result(2, 0);
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i - 1] < nums[i]) {
            des_len = 1;
            ++asc_len;
        } else if (nums[i - 1] > nums[i]) {
            asc_len = 1;
            ++des_len;
        } else {
            asc_len = 1;
            des_len = 1;
        }

        int current_len = std::max(asc_len, des_len);
        if (max_length < current_len) {
            result = {i - current_len + 1, i};
            max_length = current_len;
        }
    }

    return result;
}