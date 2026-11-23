#pragma once

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}

    ~ListNode() {
        if (next) {
            delete next;
        }
    }
};

bool hasCycle(ListNode *head);
bool hasCycle2(ListNode *head);
