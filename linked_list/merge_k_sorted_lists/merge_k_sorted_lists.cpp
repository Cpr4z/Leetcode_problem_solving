#include "merge_k_sorted_lists.hpp"

int getValue(ListNode* node) {
    if (node) {
        return node->val;
    }

    return INT_MAX;
}

ListNode* mergeLists(ListNode* l1, ListNode* l2) {
    if (!l1) {
        return l2;
    }

    if (!l2) {
        return l1;
    }

    ListNode dummy = ListNode(0);
    ListNode* current = &dummy;
    while (l1 || l2) {
        if (getValue(l1) < getValue(l2)) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l1;
            l2 = l2->next;
        }

        current = current->next;
    }

    current->next = l1 ? l1 : l2;
    ListNode* result = dummy.next;
    return result;
}


ListNode* mergeKLists(vector<ListNode*>& lists) {
    int active = lists.size(), writing = 0;
    while (active > 1) {
        for (int i = 0; i < active; i += 2) {
            if (i + 1 < active) {
                lists[writing] = mergeLists(lists[i], lists[i + 1]);
            } else {
                lists[writing] = lists[i];
            }

            ++writing;
        }

        active = writing;
        writing = 0;
    }

    return lists[0];
}
