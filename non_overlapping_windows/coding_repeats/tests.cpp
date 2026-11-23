#include "coding_repeats.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(Compress, SimpleTest) {
    std::vector<char> symbols {'x','x','y','z','z','z'};
    std::vector<char> expected {'x', '2', 'y', 'z', '3'};
    EXPECT_THAT(
            compress(symbols),
            ::testing::UnorderedElementsAreArray(expected)
    );
}

TEST(Compress, SimpleTest1) {
    std::vector<char> symbols {'x'};
    std::vector<char> expected {'x'};
    EXPECT_THAT(
            compress(symbols),
            ::testing::UnorderedElementsAreArray(expected)
    );
}

TEST(Compress, SimpleTest2) {
    std::vector<char> symbols {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'};
    std::vector<char> expected {'x', '1', '2'};
    EXPECT_THAT(
            compress(symbols),
            ::testing::UnorderedElementsAreArray(expected)
    );
}
