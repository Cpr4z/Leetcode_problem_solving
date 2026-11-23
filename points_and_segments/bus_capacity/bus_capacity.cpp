#include "bus_capacity.hpp"

bool busCapacity(vector<vector<int>> trips, int capacity) {
    std::vector<std::pair<int, int>> points;
    points.reserve(trips.size() * 2);
    for (const auto& trip : trips) {
        points.emplace_back(trip[0], trip[2]);
        points.emplace_back(trip[1], -trip[2]);
    }

    std::sort(points.begin(), points.end(), [](const std::pair<int, int>& trip1, const std::pair<int, int>& trip2){
        if (trip1.first == trip2.first) {
            return trip1.first > trip2.first;
        }
        return trip1.first < trip2.first;
    });

    int result = 0;
    for (const auto [pos, count] : points) {
        result += count;
        if (result > capacity) {
            return false;
        }
    }

    return true;
}
