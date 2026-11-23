#include "merge_lists.hpp"

#include <numeric>

int getValue(ListNode* node) {
    if (!node) {
        return INT_MAX;
    }
    return node->val;
}

ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;
    while (head1 || head2) {
        if (getValue(head1) < getValue(head2)) {
            current->next = head1;
            head1 = head1->next;
        } else {
            current->next = head2;
            head2 = head2->next;
        }

        current = current->next;
    }

    ListNode* result = dummy->next;
    delete dummy;
    return result;
}