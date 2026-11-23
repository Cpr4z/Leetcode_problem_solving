#include "reversed_linked_list.hpp"

ListNode* reverseList(ListNode* head) {
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


ListNode* reverseList1(ListNode* head) {
    if (!head) {
        return head;
    }

    ListNode* prev = head;
    ListNode* current = head->next;
    ListNode* tmp = nullptr;
    head->next = nullptr;
    while(current) {
        tmp = current->next;
        current->next = prev;
        prev = current;
        current = tmp;
    }

    return prev;
}


ListNode* reverseList2(ListNode* head) {
    if (!head) {
        return head;
    }

    ListNode* current = head->next;
    if (!current) {
        return head;
    }

    head->next = head;
    ListNode* tmp = nullptr;
    while(current->next) {
        tmp = current->next;
        current->next = head->next;
        head->next = current;
        current = tmp;
    }

    current->next = head->next;
    head->next = nullptr;

    return current;
}