#include "urlify_string.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(UrlifyString, SimpleTest1) {
    std::vector<char> initial {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '#', '#'};
    int k = 11;
    std::vector<char> result {'h', 'e', 'l', 'l', 'o', '%', '2', '0', 'w', 'o', 'r', 'l', 'd'};
    EXPECT_THAT(
            urlify(initial, k),
            ::testing::UnorderedElementsAreArray(result)
    );
}

