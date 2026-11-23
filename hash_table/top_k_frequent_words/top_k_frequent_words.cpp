#include "top_k_frequent_words.hpp"

#include <unordered_map>
#include <queue>

vector<string> topKFrequent(vector<string>& words, int k) {
    std::unordered_map<std::string, int> stat;
    for (const auto& word : words) {
        ++stat[word];
    }

    const auto comparator = [](const auto& el1, const auto& el2) -> bool{
        if (el1.first == el2.first) {
            return el1.second > el2.second;
        }

        return el1.first < el2.first;
    };

    std::priority_queue<pair<int, string>, std::vector<pair<int, string>>, decltype(comparator)> queue(comparator);
    for (const auto& [word, count] : stat) {
        queue.emplace(count, word);
    }

    std::vector<string> result;
    while (k > 0) {
        result.push_back(queue.top().second);
        queue.pop();
        --k;
    }

    return result;
}
