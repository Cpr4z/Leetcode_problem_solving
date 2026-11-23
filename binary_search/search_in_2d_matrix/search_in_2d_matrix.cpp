#include "search_in_2d_matrix.hpp"

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row_size = matrix[0].size();
    int l = 0, r = matrix.size() * row_size;
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (matrix[m / row_size][m % row_size] <= target) {
            l = m;
        } else {
            r = m;
        }
    }

    return matrix[l / row_size][l % row_size] == target;
}


bool searchMatrix2(vector<vector<int>>& matrix, int target) {
    int begin_row = 0;
    int pivot_row = matrix.size() / 2;
    int end_row = matrix.size() - 1;
    // O(log(m))
    while(begin_row < end_row) {
        if (matrix[pivot_row][matrix[pivot_row].size() - 1] < target) {
            begin_row = pivot_row + 1;
            pivot_row = begin_row + (end_row - begin_row) / 2;
        } else if (matrix[pivot_row][matrix[pivot_row].size() - 1] > target) {
            end_row = pivot_row;
            pivot_row = begin_row + (end_row - begin_row) / 2;
        } else {
            return true;
        }
    }

    if (pivot_row >= matrix.size()) {
        return false;
    }

    int begin_col = 0;
    const vector<int>& pivot_vec = matrix[pivot_row];
    int pivot_col = pivot_vec.size() / 2;
    int end_col = pivot_vec.size() - 1;
    // O(log(n))
    while(begin_col <= end_col) {
        if (pivot_vec[pivot_col] < target) {
            begin_col = pivot_col + 1;
            pivot_col = begin_col + (end_col - begin_col) / 2;
        } else if (pivot_vec[pivot_col] > target) {
            end_col = pivot_col - 1;
            pivot_col = begin_col + (end_col - begin_col) / 2;
        } else {
            return true;
        }
    }

    return false;
}