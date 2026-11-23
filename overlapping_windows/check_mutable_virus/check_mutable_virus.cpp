#include "check_mutable_virus.hpp"

#include <unordered_map>

//Ввод: gene = "cdeebba", virus = "abb"
//Вывод: true

//Ввод: gene = "xyxxux", virus = "xxx"
//Вывод: false

//Ввод: gene = "monstergen", virus = "ster"
//Вывод: true

// "ster"
// "monstergen"

// virus = "aaaaaa"
// gene = "cdeeaaaaaa"

// table.size() == 1
// window_size ==


// "abb"
// "cdeebba"
//     l
//     r
bool checkForVirus(string gene, string virus) {
    if (gene.empty() && virus.empty()) {
        return true;
    }

    std::unordered_map<char, int> table;
    for (char symbol : virus) {
        ++table[symbol];
    }

    std::unordered_map<char, int> window;
    int start  = 0, end = -1;
    while (start < gene.size()) {
        while (end + 1 < gene.size() && (table.contains(gene[end + 1]) && window[gene[end + 1]] < table[gene[end + 1]])) {
            ++window[gene[end + 1]];
            ++end;
        }

        int window_size = end - start + 1;
        if (window_size == virus.size()) {
            return true;
        }

        --window[gene[start]];
        if (window[gene[start]] == 0) {
            window.erase(gene[start]);

            // нуно учитывать, что у нас могут символы вообще не совпадать, с тем, что у нас есть в окне
            // поэтому когда появляется отрицательное значение в массиве нужно передвигать end, чтобы он не отставал
            // от start
        } else if (window[gene[start]] < 0) { // самый важный момент в задаче
            window.erase(gene[start]);
            end = start;
        }

        ++start;
    }

    return false;
}