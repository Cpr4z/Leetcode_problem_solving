#include "find_meeting_room.hpp"


//Ввод: nums1 = [[0, 30], [60, 90]], nums2 = [[10, 40], [80, 100]], duration = 15
//Вывод: [10, 25]

//Ввод: nums1 = [[5, 20], [50, 70]], nums2 = [[0, 10], [55, 80]], duration = 10
//Вывод: [55, 65]

//Ввод: nums1 = [[0, 5], [20, 25]], nums2 = [[10, 15], [30, 35]], duration = 5
//Вывод: []

vector<int> findMeetingTime(vector<vector<int>> nums1, vector<vector<int>> nums2, int duration) {
    int p1 = 0, p2 = 0;
    while (p1 < nums1.size() && p2 < nums2.size()) {
        int start_p1 = nums1[p1][0];
        int end_p1 = nums1[p1][1];
        int start_p2 = nums2[p2][0];
        int end_p2 = nums2[p2][1];
        if (std::min(end_p1, end_p2) - std::max(start_p1, start_p2) >= duration) {
            return {std::max(start_p1, start_p2), std::max(start_p1, start_p2) + duration};
        } else {
            if (end_p1 < end_p2) {
                ++p1;
            } else {
                ++p2;
            }
        }
    }

    return {};
}