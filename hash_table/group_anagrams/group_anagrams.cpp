#include "group_anagrams.hpp"

#include <unordered_map>

// n — количество слов, N — суммарное число символов.
//
// Время в среднем: O(N + n).
// Верхняя оценка в худшем случае: O(N + n^2) из-за коллизий.
//
// Дополнительная память, включая результат: O(N + n).
//
// Если все слова непустые, n <= N:
// среднее время и память упрощаются до O(N).
vector<vector<string>> groupAnagrams(vector<string> strs) {
    if (strs.empty()) {
        return {};
    }

    // n - кол-во слов
    // N - суммарное число символов
    // g - число групп анаграмм, где g <= n
    constexpr size_t alphabet_size = 26;
    // O(1) - размер массива всегда константа
    std::array<int, alphabet_size> letters{};

    // Память после заполнения: O(N + n).
    std::unordered_map<std::string, std::vector<std::string>> table;
    // Время: O(n)
    for (const auto& word : strs) {
        for (const char symbol : word) {
            ++letters[symbol - 'a'];
        }

        std::string key;
        // O(1)
        for (size_t i = 0; i < alphabet_size; ++i) {
            key += "#" + std::to_string(letters[i]);
            letters[i] = 0;
        }

        // Время: O(1)
        table[key].push_back(word);
    }

    // Время: O(g).
    // Дополнительно выделяемая память: O(g).
    // Буферы групп и строки передаются из table без копирования.
    std::vector<std::vector<std::string>> result;
    result.reserve(table.size());
    for (auto& [_, words] : table) {
        result.emplace_back(std::move(words));
    }

    return result;
}

// Время: O(n + N log(N))
// Память:  O(n + N)

vector<vector<string>> groupAnagrams2(vector<string> strs) {
    if (strs.empty()) {
        return {};
    }

    // n - кол-во слов
    // N - общее кол-во символов
    // g - кол-во групп

    // Память: O(n + N)
    std::unordered_map<std::string, std::vector<std::string>> table;

    // Память: O(N)
    // Время:  O(n + N log(N))
    for (const auto& word : strs) {
        std::string word_copy = word;
        std::sort(word_copy.begin(), word_copy.end());
        table[word_copy].push_back(word);
    }

    // Память: O(g)
    // Время: O(g)
    std::vector<std::vector<string>> result;
    result.reserve(table.size());
    for (auto& [_, words] : table) {
        result.emplace_back(std::move(words));
    }

    return result;
}
