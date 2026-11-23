#include "overlapping_intervals.hpp"

#include <set>

bool isOverlapping(const std::vector<int>& segment1, const std::vector<int>& segment2) {
    return std::max(segment1[0], segment2[0]) <= std::min(segment1[1], segment2[1]);
}


// [[1,5], [4,7], [6,8]]
vector<vector<int>> findOverlappings(vector<vector<int>> segments) {
    std::sort(segments.begin(), segments.end(), [](const std::vector<int>& segment1, const std::vector<int>& segment2){
        return segment1[0] < segment2[0];
    });

    int max_index = 0;
    std::set<std::pair<int, int>> result_;
    for (int i = 1; i < segments.size(); ++i) {
        if (isOverlapping(segments[i], segments[max_index])) {
            result_.insert({segments[i][0], segments[i][1]});
            result_.insert({segments[max_index][0], segments[max_index][1]});
        }

        if (segments[i][1] > segments[max_index][1]) {
            max_index = i;
        }
    }

    std::vector<std::vector<int>> result(result_.size());
    for (const auto [start, end] : result_) {
        result.emplace_back(start, end);
    }

    return result;
}