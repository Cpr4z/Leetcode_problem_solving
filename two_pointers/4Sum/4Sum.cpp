#include "4Sum.hpp"

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int size = nums.size();
    if (size < 4) {
        return {};
    }

    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    for (int i = 0; i < size - 3; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        const int64_t min_sum =
                0LL + nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3];
        if (min_sum > target) {
            break;
        }

        const long long max_sum =
                0LL + nums[i] + nums[size - 3] + nums[size - 2] + nums[size - 1];
        if (max_sum < target) {
            continue;
        }

        for (int j = i + 1; j < size - 2; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) {
                continue;
            }

            int left = j + 1;
            int right = size - 1;
            while (left < right) {
                int64_t sum = 0LL + nums[i] + nums[j] + nums[left] + nums[right];
                if (sum < target) {
                    ++left;
                } else if(sum > target) {
                    --right;
                } else {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});

                    ++left;
                    --right;

                    while (left < right && nums[left] == nums[left - 1]) {
                        ++left;
                    }

                    while (left < right && nums[right] == nums[right + 1]) {
                        --right;
                    }
                }
            }
        }
    }

    return result;
}