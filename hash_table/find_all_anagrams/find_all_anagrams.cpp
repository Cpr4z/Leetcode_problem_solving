#include "find_all_anagrams.hpp"

#include <unordered_map>

vector<int> findAnagrams(string s, string p) {
    int s_size = s.size();
    int p_size = p.size();
    if (p_size > s_size) {
        return {};
    }

    vector<int> result;
    std::unordered_map<int, int> table;
    for (size_t i = 0; i <= s_size - p_size; ++i) {
        for (size_t j = 0; j < p_size; ++j) {
            ++table[static_cast<int>(s[i + j])];
            --table[static_cast<int>(p[j])];
        }

        bool is_valid = std::ranges::all_of(table, [](const auto& element){
            return !element.second;
        });

        if (is_valid) {
            result.emplace_back(i);
        }

        for (size_t j = 0; j < p_size; ++j) {
            table[static_cast<int>(s[i + j])] = 0;
            table[static_cast<int>(p[j])] = 0;
        }
        table.erase(static_cast<int>(s[i]));
    }

    return result;
}

vector<int> findAnagrams2(string s, string p) {
    int s_size = s.size();
    int p_size = p.size();
    if (p_size > s_size) {
        return {};
    }

    std::array<int, 26> need{}, window{};
    for (const char symb_p : p) {
        ++need[symb_p - 'a'];
    }

    int match = 0;
    for (size_t i = 0; i < window.size(); ++i) {
        if (window[i] == need[i]) {
            ++match;
        }
    }

    std::vector<int> result;
    for (int i = 0; i < s_size; ++i) {
        int index = s[i] - 'a';
        if (window[index] == need[index]) {
            --match;
        }

        ++window[index];
        if (window[index] == need[index]) {
            ++match;
        }

        if (i >= p_size) {
            int remove_index = s[i - p_size] - 'a';
            if (window[remove_index] == need[remove_index]) {
                --match;
            }

            --window[remove_index];
            if (window[remove_index] == need[remove_index]) {
                ++match;
            }
        }

        if ((i >= p_size - 1) && match == window.size()) {
            result.push_back(i - p_size + 1);
        }
    }

    return result;
}

// n = s.size(), m = t.size(), R — количество найденных позиций.
// U = max(1, число различных символов в объединении s и t).
// При m <= n: среднее время O(n + m), худшее O((n + m) * U)
// из-за возможных коллизий в unordered_map; добавления в result учтены амортизированно.
// Для фиксированного алфавита U = O(1), поэтому обе оценки — O(n + m) = O(n).
// Дополнительная память: O(U) без результата, O(U + R) с результатом.
// Параметры передаются по значению: при копировании входных строк дополнительно
// требуются O(n + m) времени и памяти; полная память тогда O(n + m + U + R).
// При m > n тело функции возвращает результат за O(1) времени и памяти,
// без учета создания параметров s и t.

// O(m + m + (n - m)) = O(m + n)
vector<int> findAnagrams3(string s, string t) {
    int s_size = s.size();
    int t_size = t.size();
    std::vector<int> result;
    if (t_size > s_size) {
        return result;
    }

    std::unordered_map<int, int> diff;
    // Время O(m)
    for (const char symbol_t : t) {
        ++diff[symbol_t];
    }

    int l = 0;
    int r = 0;
    // Время O(m)
    while (r < t_size) {
        char current = s[r];
        --diff[current];
        if (!diff[current]) {
            diff.erase(current);
        }

        ++r;
    }

    if (diff.empty()) {
        result.emplace_back(l);
    }

    // O(n - m)
    while (r < s_size) {
        char current_l = s[l];
        ++diff[current_l];
        if (!diff[current_l]) {
            diff.erase(current_l);
        }
        ++l;

        char current_r = s[r];
        --diff[current_r];
        if (!diff[current_r]) {
            diff.erase(current_r);
        }
        ++r;

        if (diff.empty()) {
            result.emplace_back(l);
        }
    }

    return result;
}
