#include "check_mutable_virus.hpp"

#include <gtest/gtest.h>

TEST(CheckMutableVirus, SimpleTest1) {
    std::string gene {"cdeebba"};
    std::string virus {"abb"};
    EXPECT_TRUE(checkForVirus(gene, virus));
}

TEST(CheckMutableVirus, SimpleTest2) {
    std::string gene {"xyxxux"};
    std::string virus {"xxx"};
    EXPECT_FALSE(checkForVirus(gene, virus));
}

TEST(CheckMutableVirus, SimpleTest3) {
    std::string gene {"abc"};
    std::string virus {"dbc"};
    EXPECT_FALSE(checkForVirus(gene, virus));
}

TEST(CheckMutableVirus, SimpleTest4) {
    std::string gene {""};
    std::string virus {""};
    EXPECT_TRUE(checkForVirus(gene, virus));
}