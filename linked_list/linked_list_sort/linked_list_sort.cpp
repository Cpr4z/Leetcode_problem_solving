#include "linked_list_sort.hpp"

#include <utility>
#include <memory>

ListNode* mergeSortImpl(ListNode* head, auto& split, auto& merge);

ListNode* sortLinkedList(ListNode* head) {
    if (!head) {
        return nullptr;
    }

    const auto split = [](ListNode* node) -> std::pair<ListNode*, ListNode*>{
        ListNode* slow = node;
        ListNode* fast = node->next;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* mid = slow->next;
        slow->next = nullptr;
        return {node, mid};
    };

    const auto merge = [](ListNode* l1, ListNode* l2) {
        auto dummy = std::make_unique<ListNode>(0);
        ListNode* current = dummy.get();
        while (l1 && l2) {
            if (l1->val < l2->val) {
                current->next = l1;
                l1 = l1->next;
            } else {
                current->next = l2;
                l2 = l2->next;
            }

            current = current->next;
        }

        current->next = l1 ? l1 : l2;
        return dummy->next;
    };

    return mergeSortImpl(head, split, merge);
}

ListNode* mergeSortImpl(ListNode* head, auto& split, auto& merge) {
    if (!head || !head->next) {
        return head;
    }

    auto [left, right] = split(head);
    ListNode* left_sorted = mergeSortImpl(left, split, merge);
    ListNode* right_sorted = mergeSortImpl(right, split, merge);
    return merge(left_sorted, right_sorted);
}
