#include "find_competition_winner.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(FindCompetitionWinner, SimpleTest1) {
    std::vector<std::vector<std::vector<int>>> stat {{{1, 1000}, {2, 3500}}, {{1, 1500}}};
    std::vector<int> expected{1};
    EXPECT_THAT(
            findCompetitionWinners(stat),
            ::testing::UnorderedElementsAreArray(expected)
    );
}

TEST(FindCompetitionWinner, SimpleTest2) {
    std::vector<std::vector<std::vector<int>>> stat{
            {{2, 4000}, {9, 500}, {4, 2000}, {6, 1000}},
            {{9, 5000}, {2, 1500}, {4, 5500}, {6, 2000}},
            {{2, 3420}, {9, 10000}, {6, 10850}, {4, 8000}}
    };

    const std::vector<int> expected{9, 4};

    EXPECT_THAT(
            findCompetitionWinners(stat),
            ::testing::UnorderedElementsAreArray(expected)
    );
}