#include "longest_gene_sequence.hpp"

#include <gtest/gtest.h>

TEST(LongestGeneSequence, SimpleTest1) {
    std::string sequence {"YYxxXXXyyy"};
    int target = 3;
    int result = 8;
    EXPECT_EQ(longestGeneSequence(sequence, target), result);
}

TEST(LongestGeneSequence, SimpleTest2) {
    std::string sequence {"yyy"};
    int target = 0;
    int result = 0;
    EXPECT_EQ(longestGeneSequence(sequence, target), result);
}

TEST(LongestGeneSequence, SimpleTest3) {
    std::string sequence {"aXYYYXYXYbccc"};
    int target = 1;
    int result = 3;
    EXPECT_EQ(longestGeneSequence(sequence, target), result);
}

TEST(LongestGeneSequence, SimpleTest4) {
    std::string sequence {"aabbcc"};
    int target = 0;
    int result = 0;
    EXPECT_EQ(longestGeneSequence(sequence, target), result);
}


