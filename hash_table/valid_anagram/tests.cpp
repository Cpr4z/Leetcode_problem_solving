#include "valid_anagram.hpp"

#include <gtest/gtest.h>

TEST(AnagramTests, SimpleTest) {
    const std::string s = "anagram";
    const std::string t = "nagaram";
    EXPECT_TRUE(isAnagram(s, t));
}

TEST(AnagramTests, SimpleTest1) {
    const std::string s = "rat";
    const std::string t = "car";
    EXPECT_FALSE(isAnagram(s, t));
}

TEST(AnagramTests, SimpleTest2) {
    const std::string s = "ggii";
    const std::string t = "eekk";
    EXPECT_FALSE(isAnagram(s, t));
}
