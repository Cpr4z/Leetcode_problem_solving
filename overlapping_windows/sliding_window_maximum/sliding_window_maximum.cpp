#include "sliding_window_maximum.hpp"

#include <deque>

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> result;
    result.reserve(nums.size() - 1);
    deque<int> queue;
    for (int i = 0; i < nums.size(); ++i) {
        while (!queue.empty() && queue.front() <= i - k) {
            queue.pop_front();
        }


        while (!queue.empty() && nums[i] >= nums[queue.back()]) {
            queue.pop_back();
        }

        queue.push_back(i);
        if (i >= k - 1) {
            result.push_back(nums[queue.front()]);
        }
    }

    return result;
}