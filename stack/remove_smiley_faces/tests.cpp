#include "remove_smiley_faces.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(RemoveSmileyFaces, SimpleTest1) {
    std::vector<char> chars = {'a', ':', '-', ')', 'b', ':', '-', ')', ')', ')', 'c'};
    std::vector<char> expected = {'a', 'b', 'c'};
    std::vector<int> result {1,2,3};
    EXPECT_THAT(
            removeSmiles(chars),
            ::testing::UnorderedElementsAreArray(expected)
    );
}

TEST(RemoveSmileyFaces, SimpleTest2) {
    std::vector<char> chars = {':', '-', ':', '-', ')', ')', '('};
    std::vector<char> expected = {':', '-', '('};

    EXPECT_THAT(
            removeSmiles(chars),
            ::testing::UnorderedElementsAreArray(expected)
    );
}