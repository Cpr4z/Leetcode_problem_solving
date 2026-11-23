#include "palindrome_list.hpp"

ListNode* find_middle_node(ListNode* head) {
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

ListNode* get_reversed_list(ListNode* head) {
    ListNode* current = head;
    ListNode* prev = nullptr;
    while (current) {
        ListNode* tmp = current->next;
        current->next = prev;
        prev = current;
        current = tmp;
    }

    return prev;
}

bool isPalindrome(ListNode* head) {
    ListNode* middle_node = find_middle_node(head);
    ListNode* reversed_tail = get_reversed_list(middle_node);
    ListNode* l = head;
    ListNode* r = reversed_tail;
    while (r) {
        if (r->val != l->val) {
            return false;
        }

        r = r->next;
        l = l->next;
    }

    return true;
}
