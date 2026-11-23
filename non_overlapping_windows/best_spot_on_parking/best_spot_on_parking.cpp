#include "best_spot_on_parking.hpp"

int bestParkingSpot(vector<int> nums) {
    int start = 0, end = 0;
    int max_dist = 0;
    while (start < nums.size()) {
        while (end + 1 < nums.size() && nums[end] == nums[end + 1]) {
            ++end;
        }

        if (!nums[end]) {
            if (start == 0 || end == nums.size() - 1) {
                max_dist = std::max(max_dist, end - start + 1);
            } else {
                max_dist = std::max(max_dist, (end - start + 2) / 2);
            }
        }

        start = end + 1;
        ++end;
    }

    return max_dist;
}