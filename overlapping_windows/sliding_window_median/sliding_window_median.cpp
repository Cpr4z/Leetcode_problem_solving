#include "sliding_window_median.hpp"

#include <queue>
#include <unordered_map>

struct MinMaxHeap {
    explicit MinMaxHeap(int k): m_is_honest(!(k % 2))  {}

    void push(int value) {
        clear();
        if (m_min_heap.empty() || value <= m_min_heap.top()) {
            ++m_min_size;
            m_min_heap.push(value);
        } else {
            ++m_max_size;
            m_max_heap.push(value);
        }

        balance();
    }

    void erase(int value) {
        clear();
        if (value <= m_min_heap.top()) {
            --m_min_size;
        } else {
            --m_max_size;
        }

        ++m_delayed[value];
        balance();
    }

    void clear() {
        while (!m_min_heap.empty() && m_delayed[m_min_heap.top()] != 0) {
            --m_delayed[m_min_heap.top()];
            m_min_heap.pop();
        }

        while (!m_max_heap.empty() && m_delayed[m_max_heap.top()] != 0) {
            --m_delayed[m_max_heap.top()];
            m_max_heap.pop();
        }
    }

    double get_median() {
        clear();
        if (!m_is_honest) {
            return m_min_heap.top();
        }

        return (static_cast<double>(m_min_heap.top()) + static_cast<double>(m_max_heap.top())) / 2;
    }

    void balance() {
        while (m_min_size < m_max_size) {
            m_min_heap.push(m_max_heap.top());
            m_max_heap.pop();
            ++m_min_size;
            --m_max_size;

            clear();
        }

        while (m_min_size > m_max_size + 1) {
            m_max_heap.push(m_min_heap.top());
            m_min_heap.pop();
            --m_min_size;
            ++m_max_size;

            clear();
        }
    }

private:
    // куча для элементов которые в меньшей отсортированной половине
    // наверху лежит макимальный элемент
    std::priority_queue<int, std::deque<int>, std::less<>> m_min_heap;
    // куча для элементов которые в меньшей отсортированной половине
    // наверху лежит минимальный элемент
    std::priority_queue<int, std::deque<int>, std::greater<>> m_max_heap;
    std::unordered_map<int, int> m_delayed;
    bool m_is_honest = false;
    int m_min_size = 0;
    int m_max_size = 0;
};

vector<double> medianSlidingWindow(vector<int>& nums, int k) {
    MinMaxHeap heap(k);
    vector<double> result;
    result.reserve(nums.size() - 1);
    for (int i = 0; i < nums.size(); ++i) {
        heap.push(nums[i]);
        if (i >= k - 1) {
            result.push_back(heap.get_median());
            heap.erase(nums[i - k + 1]);
        }
    }

    return result;
}