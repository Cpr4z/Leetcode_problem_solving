#include "group_anagrams.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(GroupAnagrams, SimpleTest1) {
    std::vector<std::string> words{"ab","bat","ba","tab","ear","apt"};
    std::vector<std::vector<std::string>> expected {{"ab","ba"}, {"bat","tab"}, {"apt"}, {"ear"}};
    EXPECT_THAT(
            groupAnagrams(words),
            ::testing::UnorderedElementsAreArray(expected)
    );

    EXPECT_THAT(
            groupAnagrams2(words),
            ::testing::UnorderedElementsAreArray(expected)
    );
}

TEST(GroupAnagrams, SimpleTest2) {
    std::vector<std::string> words{};
    std::vector<std::vector<std::string>> expected{};
    EXPECT_THAT(
            groupAnagrams(words),
            ::testing::UnorderedElementsAreArray(expected)
    );

    EXPECT_THAT(
            groupAnagrams2(words),
            ::testing::UnorderedElementsAreArray(expected)
    );
}

TEST(GroupAnagrams, SimpleTest3) {
    std::vector<std::string> words{"hello"};
    std::vector<std::vector<std::string>> expected{{"hello"}};
    EXPECT_THAT(
            groupAnagrams(words),
            ::testing::UnorderedElementsAreArray(expected)
    );

    EXPECT_THAT(
            groupAnagrams2(words),
            ::testing::UnorderedElementsAreArray(expected)
    );
}
