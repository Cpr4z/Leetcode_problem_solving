#include "palindrome_list.hpp"

#include <gtest/gtest.h>

TEST(PalindromeList, SimpleTest) {
    ListNode* root = new ListNode(5);
    root->next = new ListNode(4);
    root->next->next = new ListNode(5);
    EXPECT_TRUE(isPalindrome(root));
}

TEST(PalindromeList, SimpleTest1) {
    ListNode* root = new ListNode(5);
    EXPECT_TRUE(isPalindrome(root));
}