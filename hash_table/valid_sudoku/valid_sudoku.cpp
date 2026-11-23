#include "valid_sudoku.hpp"

#include <unordered_set>

bool isValidSudoku(vector<vector<char>> board) {
    std::unordered_set<std::string> strings, columns, sectors;
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board.size(); ++j) {
            char symbol = board[i][j];
            if (symbol == '.') {
                continue;
            }

            int sector_number = (i /3) * 3 + (j / 3);
            std::string string_id = std::to_string(i) + std::to_string(symbol);
            std::string column_id = std::to_string(j) + std::to_string(symbol);
            std::string sector_id = std::to_string(sector_number) + std::to_string(symbol);
            if (strings.contains(string_id) || columns.contains(column_id) || sectors.contains(sector_id)) {
                return false;
            }

            strings.insert(string_id);
            columns.insert(column_id);
            sectors.insert(sector_id);
        }
    }

    return true;
}

bool isValidSudoku2(vector<vector<char>> board) {
    bool rows[9][9] {false};
    bool columns[9][9] {false};
    bool sections[9][9] {false};
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            char symbol = board[i][j];
            if (symbol != '.') {
                int num = symbol - '1';
                int section_index = (i / 3) * 3 + (j / 3);
                if (rows[i][num] || columns[j][num] || sections[section_index][num]) {
                    return false;
                }

                rows[i][num] = columns[j][num] = sections[section_index][num] = true;
            }
        }
    }

    return true;
}
