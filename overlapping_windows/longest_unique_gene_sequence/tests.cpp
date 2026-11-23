#include "longest_unique_gene_sequence.hpp"

#include <gtest/gtest.h>

TEST(LongestUniqueSequence, SimpleTest1) {
    string genes {"yxyabcxyx"};
    int result = 5;
    EXPECT_EQ(longestGeneSequence(genes), result);
}

TEST(LongestUniqueSequence, SimpleTest2) {
    string genes {"Aac"};
    int result = 3;
    EXPECT_EQ(longestGeneSequence(genes), result);
}

TEST(LongestUniqueSequence, SimpleTest3) {
    string genes {"ffff"};
    int result = 1;
    EXPECT_EQ(longestGeneSequence(genes), result);
}
