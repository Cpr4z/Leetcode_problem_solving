#include "delete_k_from_the_end.hpp"

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0);
    ListNode* slow = dummy;
    ListNode* fast = dummy;
    dummy->next = head;
    for (int i = 0; i < n + 1; ++i) {
        fast = fast->next;
    }

    while (fast) {
        fast = fast->next;
        slow = slow->next;
    }

    ListNode* to_delete = slow->next;
    slow->next = to_delete->next;
    delete to_delete;

    ListNode* result = dummy->next;
    delete dummy;
    return result;
}
