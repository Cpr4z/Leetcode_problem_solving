#include "number_of_column.hpp"

int intFromExcelColumn(string column) {
    int result = 0;
    for (char ch : column) {
        int val = ch - 'A' + 1;
        result = result * 26 + val;
    }

    return result;
}
