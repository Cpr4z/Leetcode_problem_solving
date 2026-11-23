#include "count_pairs_with_diff_k.hpp"


int countPairs(vector<int> nums, int k) {
    int n = nums.size();
    if (!k) {
        // Откуда берется вот эта формула
        return n * (n + 1) / 2;
    }

    std::sort(nums.begin(), nums.end());
    int start = 0, end = 0;
    int result = 0;
    while (start < n) {
        while (end + 1 < n && (nums[end + 1] - nums[start] < k)) {
            ++end;
        }

        // Почему мы делаем имменно так и почему это должно стать ответом
        result += n - (end + 1);
        start++;
    }

    return result;
}