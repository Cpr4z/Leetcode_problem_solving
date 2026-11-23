#include "find_middle.hpp"

#include <gtest/gtest.h>


TEST(FindMiddle, SimpleTest) {
    ListNode* root = new ListNode(5);
    root->next = new ListNode(4);
    root->next->next = new ListNode(6);
    int result = 4;
    EXPECT_EQ(middleNodeValue(root), result);
}
