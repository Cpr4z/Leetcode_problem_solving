#include "convoluted_route.hpp"

#include <unordered_map>
#include <unordered_set>

// Суммарная сложность:

// Время:
// Худший случай: O(n^2) + O(n) + O(n^2)
// Лучший случай: O(n) + O(n) + O(n) = O(n)

// Память:
// O(n) + O(n) = O(n)


// При этом еще можно учитывать максимальную длину названия для всех городов
// Длина строки влияет на время выполнения операции подсчета хэша строки
// допустим длина строки равно l, а максимальная длина строки среди всех строк равна L
// тогда справедливо равенство l <= L
// Для строки длиной 1000 нужно пройтись по 1000 символам, чтобы вычислить ее хэш
// поэтому операция вычисления хэша в худшем случае будет занимать O(L)
vector<string> route(vector<vector<string>> tickets) {
    // Память: O(n + 1)
    std::unordered_map<std::string, std::vector<std::string>> graph;
    // Время
    // Лучший случай: (2(O(1) + O(1))) * n = O(n)
    // Худший случай: (2(O(n) + O(1))) * n = O(n^2)
    for (const auto& ticket : tickets) {
        graph[ticket[0]].push_back(ticket[1]);
        graph[ticket[1]].push_back(ticket[0]);
    }

    std::string start_city;
    // Время
    // Худший случай: O(n) = O(n)
    // Лучший случай: O(1) (если искомый город стоит первый в списке)
    for (const auto& [city, neighbours] : graph) {
        if (neighbours.size() == 1) {
            start_city = city;
            break;
        }
    }

    // Память O(n + 1) + O(n + 1) = O(n)
    std::vector<std::string> result{start_city};
    std::unordered_set<std::string> visited{start_city};

    // Время
    // Лучший случай: O(n (1 + 1)) = O(n)
    // Худший случай: O(n * (n + n)) = O(2n^2) = O(n^2)
    for (int i = 0; i < tickets.size(); ++i) {
        const std::string& current_city = result.back();
        for (const auto& neighbour : graph[current_city]) {
            // Лучший случай: O(1)
            // Худший случай: O(n)
            if (!visited.contains(neighbour)) {
                // O(1)
                result.push_back(neighbour);
                // Лучший случай: O(1)
                // Худший случай: O(n)
                visited.insert(neighbour);
                break;
            }
        }
    }

    return result;
}
