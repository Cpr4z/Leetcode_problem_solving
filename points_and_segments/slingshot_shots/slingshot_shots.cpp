#include "slingshot_shots.hpp"

bool isOverlapping(const std::vector<int>& interval1, const std::vector<int>& interval2) {
    return std::max(interval1[0], interval2[0]) <= std::min(interval1[1], interval2[1]) ;
}

std::vector<int> mergeIntervals(const std::vector<int>& interval1, const std::vector<int>& interval2) {
    return {std::max(interval1[0], interval2[0]), std::min(interval1[1], interval2[1])};
}

int countShots(vector<vector<int>> points) {
    std::sort(points.begin(), points.end(), [](const std::vector<int>& point1, const std::vector<int>& point2) {
        return point1[0] < point2[0];
    });

    int result = 1;
    std::vector<int> current = points[0];
    for (int i = 1; i < points.size(); ++i) {
        if (isOverlapping(current, points[i])) {
            current = mergeIntervals(current, points[i]);
        } else {
            ++result;
            current = points[i];
        }
    }

    return result;
}