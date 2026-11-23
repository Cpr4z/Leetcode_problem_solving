#include "linked_list_cycle.hpp"

#include <unordered_set>

bool hasCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            return true;
        }
    }

    return false;
}



bool hasCycle2(ListNode *head) {
    ListNode* current = head;
    std::unordered_set<ptrdiff_t> nodes;
    // O(n)
    while (current) {
        auto value = reinterpret_cast<ptrdiff_t>(current);
        // O(1)
        if (nodes.contains(value)) {
            return true;
        }

        // O(1)
        nodes.insert(value);
        current = current->next;
    }

    return false;
}