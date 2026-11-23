#include "longest_subarray_with_limit.hpp"

#include <queue>

struct MinMaxHeap {
    void push(int value) {
        m_max_heap.push(value);
        m_min_heap.push(value);
        ++m_count[value];
    }

    void remove(int value) {
        --m_count[value];
    }

    int min() {
        while (!m_min_heap.empty() && m_count[m_min_heap.top()] == 0) {
            m_min_heap.pop();
        }

        return m_min_heap.top();
    }

    int max() {
        while (!m_max_heap.empty() && m_count[m_max_heap.top()] == 0) {
            m_max_heap.pop();
        }

        return m_max_heap.top();
    }

private:

    // Компаратор в std::priority_queue указывает на отношение детей к родителям
    // если указан std::greater значит для детей должно выполняться отношение, что они больше своего родителя
    // в таком случае наверху будет лежать минимум
    std::priority_queue<int, std::vector<int>, std::greater<>> m_min_heap;
    std::priority_queue<int> m_max_heap;
    std::unordered_map<int, int> m_count;
};


int longestSubarrayWithLimit(vector<int> nums, int limit) {
    int start = 0, end = -1;
    int result = 0;
    MinMaxHeap window;
    // O(log(n))
    while (start < nums.size()) {
        while (end + 1 < nums.size()) {
            // O(log(n))
            window.push(nums[end + 1]);
            if (window.max() - window.min() > limit) {
                window.remove(nums[end + 1]);
                break;
            }
            ++end;
        }

        result = std::max(result, end - start + 1);
        window.remove(nums[start]);
        ++start;
    }

    return result;
}


int longestSubarrayWithLimit2(vector<int> nums, int limit) {
    std::deque<std::size_t> min_queue;
    std::deque<std::size_t> max_queue;

    int left = 0;
    int result = 0;

    // 1, 2, 3, 5, 8
    // limit = 1

    // left = 0
    // right = 0
    // min_queue [0]
    // max_queue [0]

    // left = 1
    // right = 1
    // min_queue [0 ,1]
    // max_queue [1]


    for (int right = 0; right < nums.size(); ++right) {
        while (!min_queue.empty() &&
               nums[min_queue.back()] >= nums[right]) {
            min_queue.pop_back();
        }

        min_queue.push_back(right);
        while (!max_queue.empty() &&
               nums[max_queue.back()] <= nums[right]) {
            max_queue.pop_back();
        }

        max_queue.push_back(right);
        while ((nums[max_queue.front()]) -
               nums[min_queue.front()] > limit) {
            if (min_queue.front() == left) {
                min_queue.pop_front();
            }

            if (max_queue.front() == left) {
                max_queue.pop_front();
            }

            ++left;
        }

        result = std::max(result, right - left + 1);
    }

    return result;
}