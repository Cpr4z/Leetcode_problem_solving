#include "merge_intervals.hpp"

bool isOverlapping(const std::vector<int>& interval1, const std::vector<int>& interval2) {
    if (std::max(interval1[0], interval2[0]) <= std::min(interval1[1], interval2[1])) {
        return true;
    }
    return false;
}

std::vector<int> mergeIntervals(const std::vector<int>& interval1, const std::vector<int>& interval2) {
    return { std::min(interval1[0], interval2[0]), std::max(interval1[1], interval2[1]) };
}

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    // n - кол-во интервалов
    // Время: O(n log(n))
    std::sort(intervals.begin(), intervals.end());

    // Память: O(n)
    std::vector<std::vector<int>> result{ intervals[0] };

    // O(n - 1) = O(n)
    for (size_t i = 1; i < intervals.size(); ++i) {
        const std::vector<int>& last = result.back();
        if (isOverlapping(last, intervals[i])) {
            result.back() = mergeIntervals(last, intervals[i]);
        } else {
            result.push_back(intervals[i]);
        }
    }

    return result;
}