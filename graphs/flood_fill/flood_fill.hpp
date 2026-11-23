#pragma once

#include <vector>

using namespace std;

vector<vector<int>> floodFillDFS(vector<vector<int>>& image, int sr, int sc, int color);
vector<vector<int>> floodFillBFS(vector<vector<int>>& image, int sr, int sc, int color);