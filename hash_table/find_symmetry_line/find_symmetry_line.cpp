#include "find_symmetry_line.hpp"

#include <unordered_set>

struct PairHasher{
    size_t operator()(const std::pair<int, int>& element) const noexcept {
        return std::hash<int>()(element.first) ^ std::hash<int>()(element.second);
    }
};

// Лучший случай
// Время: O(3n) == O(n)
// Память: O(n)

// Худший случай
// Время: О(n + n^2 + n^2)
// Память: O(n)

//«Здесь три последовательных прохода по \(n\) точкам.
//Вставка и поиск в хеш-таблице занимают в среднем \(O(1)\), поэтому суммарное время — \(O(n)\).
//Постоянное число проходов не меняет асимптотический порядок роста.
//В худшем случае из-за коллизий операции таблицы могут занимать \(O(n)\), и тогда весь алгоритм — \(O(n^2)\).»
bool isSymmetric(const vector<vector<int>>& points) {
    int maxX = points[0][0];
    int minX = points[0][0];
    // O(n)
    for (const auto& point : points) {
        maxX = std::max(maxX, point[0]);
        minX = std::min(minX, point[0]);
    }

    // Память: O(n)
    std::unordered_set<std::pair<int, int>, PairHasher> table{};
    // Лучший случай: O(n)
    // Худший случай: О(n^2)
    for (const auto& point : points) {
        // O(1)
        // В худшем случае вставка в бакет будет осуществляться за O(n)
        // это будет происходить в случае, если хэш функция будет возвращать одинаковое значение
        // для всех ключей, и при вставки нового элемента мы будем проходить по всему бакету и сравнивать
        // нет ли у нас элемента который имеет такой же ключ, это будет занимать O(n^2)
        table.insert({point[0], point[1]});
    }

    // Лучший случай: O(n)
    // Худший случай: O(n^2)
    // В худшем случае поиск будет осуществляться за O(n^2)
    // так как все элементы будут лежать в одном бакете и поочередный поиск каждого элемента
    // через потенциальный перебор всех элементов в бакете приводит к тому, что
    // суммарное кол-во операций для перебора всех точек будет вычисляться как сумма арифметической последовательности
    // и суммарно будет равна (0 + n - 1) * n / 2 = (n^2 - n) / 2
    for (const auto& point : table) {
        if (table.find({minX + maxX - point.first, point.second}) == table.end()) {
            return false;
        }
    }

    return true;
}


// Дополнения к данной задаче:
// 1) Что делать если int _x = minX + maxX - x; будет переполняться в процессе вычисления, и как это поправить?
// Чтобы избежать переполнения двух значений int нужно использовать тип данных int64_t - 8 байтовый int
// Конструкция будет выглядеть следующим образом:
// std::int64_t _x = static_cast<int64_t>(minX) + maxX - x;
// важно подменить, что указать int64_t тип в итоговом значении недостаточно, нужно у maxX или minX сделать явный каст к этому типу
// чтобы результата сложения был аналогичного типа


// 2) Можно ли решить задачу используя памяти меньше чем O(n)



bool isSymmetric2(const vector<vector<int>>& points) {
    int maxX = points[0][0];
    int minX = points[0][0];
    for (const auto& point : points) {
        maxX = std::max(maxX, point[0]);
        minX = std::min(minX, point[0]);
    }

    std::unordered_map<std::string, int> table{};
    for (const auto& point : points) {
        std::string key = std::to_string(point[0]) + "," + std::to_string(point[1]);
        ++table[key];
    }

    for (const auto& [name, freq] : table) {
        int index = name.find(',');
        int x = std::stoi(name.substr(0, index));
        int y = std::stoi(name.substr(index + 1));
//        int _x = minX + maxX - x;
        std::int64_t _x = static_cast<int64_t>(minX) + maxX - x;
        std::string to_search_key = std::to_string(_x) + "," + std::to_string(y);
        auto it = table.find(to_search_key);
        if (it == table.end() || it->second != freq) {
            return false;
        }
    }

    return true;
}

bool isSymmetric3(vector<vector<int>>& points) {
    int maxX = points[0][0];
    int minX = points[0][0];
    for (const auto& point : points) {
        maxX = std::max(maxX, point[0]);
        minX = std::min(minX, point[0]);
    }

    std::sort(points.begin(), points.end(), [](const auto& point1, const auto& point2){
        if (point1[1] == point2[1]) {
            return point1[0] < point2[0];
        }
        return point1[1] < point2[1];
    });

    std::int64_t min_max_sum = static_cast<std::int64_t>(maxX) + minX;
    std::size_t begin = 0;
    while (begin < points.size()) {
        std::size_t end = begin + 1;
        while (end < points.size() &&
               points[end][1] == points[begin][1]) {
            ++end;
        }

        std::size_t left = begin;
        std::size_t right = end;
        while (left < right) {
            const int left_x = points[left][0];
            const int right_x = points[right - 1][0];
            const std::int64_t pair_sum =
                    static_cast<std::int64_t>(left_x) + right_x;
            if (pair_sum != min_max_sum) {
                return false;
            }

            while (left < right && points[left][0] == left_x) {
                ++left;
            }

            while (left < right && points[right - 1][0] == right_x) {
                --right;
            }
        }

        begin = end;
    }

    return true;
}
