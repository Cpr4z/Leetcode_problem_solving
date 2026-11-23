#pragma once

#include <vector>
#include <string>

using namespace std;

vector<int> findAnagrams(string s, string p);

// Реализация для кейса, когда заранее известно, что элементы в строках
// - это строчные латинские символы, то есть их кол-во равно 26
vector<int> findAnagrams2(string s, string p);

// Реализация для кейса, когда заранее не известно сколько символов в алфавите
// которые использую строки
vector<int> findAnagrams3(string s, string t);