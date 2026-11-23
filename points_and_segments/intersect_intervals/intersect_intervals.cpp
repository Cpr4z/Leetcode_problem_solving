#include "intersect_intervals.hpp"

bool isOverlapping(vector<int> intervals1, vector<int> intervals2) {
    return std::max(intervals1[0], intervals2[0]) <= std::min(intervals1[1], intervals2[1]);
}

std::vector<int> mergeIntervals(vector<int> intervals1, vector<int> intervals2) {
    return {std::max(intervals1[0], intervals2[0]), std::min(intervals1[1], intervals2[1])};
}


// n - размер intervals1
// m - paзмер intervals2
// Память: O(max(n, m))
// Время: O(n + m)
vector<vector<int>> intersect(vector<vector<int>> intervals1, vector<vector<int>> intervals2) {
    std::vector<std::vector<int>> result;
    int p1 = 0, p2 = 0;
    while (p1 < intervals1.size() && p2 < intervals2.size()) {
        if (isOverlapping(intervals1[p1], intervals2[p2])) {
            result.push_back(mergeIntervals(intervals1[p1], intervals2[p2]));
        }

        if (intervals1[p1][1] < intervals2[p2][1]) {
            ++p1;
        } else {
            ++p2;
        }
    }

    return result;
}
