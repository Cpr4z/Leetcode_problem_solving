#include "linked_list_cycle.hpp"

#include <gtest/gtest.h>

TEST(LinkedListCycleTest, SimpleTest) {
    ListNode* root = new ListNode(5);
    ListNode* second = new ListNode(3);
    root->next = second;
    ListNode* third = new ListNode(12);
    second->next = third;
    ListNode* fourth = new ListNode(-3);
    third->next = fourth;
    fourth->next = second;

    EXPECT_TRUE(hasCycle(root));
}

TEST(LinkedListCycleTest, NoCycleTest) {
    ListNode* root = new ListNode(15);
    ListNode* second = new ListNode(23);
    root->next = second;
    ListNode* third = new ListNode(12);
    second->next = third;

    EXPECT_FALSE(hasCycle(root));
}

TEST(LinkedListCycleTest, SmallCycle) {
    ListNode* root = new ListNode(15);
    ListNode* second = new ListNode(23);
    root->next = second;
    second->next = root;

    EXPECT_TRUE(hasCycle(root));
}

TEST(LinkedListCycleTest, OneNode) {
    ListNode* root = new ListNode(15);

    EXPECT_FALSE(hasCycle(root));
}