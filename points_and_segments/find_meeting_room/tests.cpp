#include "find_meeting_room.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(FindMeetingRoom, SimpleTest1) {
    std::vector<std::vector<int>> nums1 {{0, 30}, {60, 90}};
    std::vector<std::vector<int>> nums2 {{10, 40}, {80, 100}};
    int duration = 15;
    std::vector<int> result {10, 25};
    EXPECT_THAT(
            findMeetingTime(nums1, nums2, duration),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(FindMeetingRoom, SimpleTest2) {
    std::vector<std::vector<int>> nums1 {{5, 20}, {50, 70}};
    std::vector<std::vector<int>> nums2 {{0, 10}, {55, 80}};
    int duration = 10;
    std::vector<int> result {55, 65};
    EXPECT_THAT(
            findMeetingTime(nums1, nums2, duration),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(FindMeetingRoom, SimpleTest3) {
    std::vector<std::vector<int>> nums1 {{0, 5}, {20, 25}};
    std::vector<std::vector<int>> nums2 {{10, 15}, {30, 35}};
    int duration = 5;
    std::vector<int> result {};
    EXPECT_THAT(
            findMeetingTime(nums1, nums2, duration),
            ::testing::UnorderedElementsAreArray(result)
    );
}
