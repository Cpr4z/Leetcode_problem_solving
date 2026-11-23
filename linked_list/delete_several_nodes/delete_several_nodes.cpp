#include "delete_several_nodes.hpp"

ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* node = dummy;
    while (node->next) {
        if (node->next->val == val) {
            node->next = node->next->next;
        } else {
            node = node->next;
        }
    }

    ListNode* result = dummy->next;
    delete dummy;
    return result;
}

ListNode* removeElements2(ListNode* head, int val) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = head;
    ListNode* prev = dummy;
    dummy->next = head;
    while (current) {
        if (current->val == val) {
            ListNode* tmp = current->next;
            prev->next = tmp;
            delete current;
            current = tmp;
        } else {
            prev = current;
            current = current->next;
        }
    }

    ListNode* result = dummy->next;
    delete dummy;
    return result;
}
