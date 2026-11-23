#include "add_two_numbers.hpp"

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* tmp = dummy;
    int carry = 0, value = 0;
    while (carry || l1 || l2) {
        value = carry;
        if (l1) {
            value += l1->val;
            l1 = l1->next;
        }

        if (l2) {
            value += l2->val;
            l2 = l2->next;
        }

        dummy->next = new ListNode(value % 10);
        carry = value / 10;
        dummy = dummy->next;
    }

    ListNode* result = tmp->next;
    delete tmp;
    return result;
}
