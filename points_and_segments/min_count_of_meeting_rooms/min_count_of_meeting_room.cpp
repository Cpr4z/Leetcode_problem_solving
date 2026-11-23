#include "min_count_of_meeting_room.hpp"

int countMeetingRooms(vector<vector<int>> intervals) {
    std::vector<std::pair<int, int>> points(intervals.size() * 2);
    for (const auto& interval : intervals) {
        points.emplace_back(interval[0], 1);
        points.emplace_back(interval[1], -1);
    }

    // Важно, что сортировка выполнется по возрастанию
    // По условию, если в один момент времени одна переговорка освобождается а другая
    // занимается, то в этот момент времени занята тольк одна переговорка
    // Поэтому сначала мы отнимаем -1 от общего числа переговорок
    // а затем уже добавляем 1
    std::sort(points.begin(), points.end());
    int max_count = 0;
    int current_count = 0;
    for (const auto& [_, value] : points) {
        current_count += value;
        max_count = std::max(current_count, max_count);
    }

    return max_count;
}