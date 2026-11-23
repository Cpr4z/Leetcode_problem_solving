#include "max_queen_sum.hpp"

int maxQueenSum(vector<vector<int>> board) {
    int n = board.size();
    int m = board[0].size();
    std::vector<int> row_prefix(n, 0);
    std::vector<int> column_prefix(m, 0);
    std::vector<int> d1_prefix(n + m - 1, 0); // главная диагональ
    // сохраняется для всех элементов отношение: i - j = const
    // -> j
    // |
    // i

    // рассмотрим крайний правый элемент сверху
    // его координаты [0, n - 1]
    // i - j = 0 - (m - 1)
    // i - j + (m - 1) = 0


    std::vector<int> d2_prefix(n + m - 1, 0); // побочная диагональ
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int value = board[i][j];
            row_prefix[i] += value;
            column_prefix[j] += value;
            d1_prefix[i - j + (m - 1)] += value;
            d2_prefix[i + j] += value;
        }
    }

    int max_sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int sum = row_prefix[i] + column_prefix[j];
            sum += d1_prefix[i - j + (m - 1)] + d2_prefix[i + j];
            sum -= 3 * board[i][j];
            if (!i && !j) {
                max_sum = sum;
            }

            max_sum = std::max(sum, max_sum);
        }
    }

    return max_sum;

}
