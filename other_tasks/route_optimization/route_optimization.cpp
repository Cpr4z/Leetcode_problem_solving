#include "route_optimization.hpp"

#include <unordered_map>
#include <set>

vector<string> optimizePath(vector<string> path) {
    vector<string> result;
    unordered_map<string, pair<int, int>> moves{
            { "U", {0, 1} },
            { "D", {0, -1}},
            { "L", {-1, 0}},
            { "R", {1, 0}}
    };

    const auto coord_to_str = [](int x, int y){
        return std::to_string(x) + "," + std::to_string(y);
    };

    int x = 0, y = 0;
    set<string> positions;
    vector<pair<int, int>> coordinates;
    coordinates.emplace_back(x ,y);
    positions.insert(coord_to_str(x, y));
    for (const auto& move : path) {
        const string& current_move = move;
        const auto move_ = moves[current_move];
        x += move_.first;
        y += move_.second;
        if (positions.contains(coord_to_str(x, y))) {
            while (x != coordinates.back().first || y != coordinates.back().second) {
                const auto last_pos = coordinates.back();
                positions.erase(coord_to_str(last_pos.first, last_pos.second));
                coordinates.pop_back();
                result.pop_back();
            }
        } else {
            coordinates.emplace_back(x, y);
            positions.insert(coord_to_str(x, y));
            result.push_back(current_move);
        }
    }

    return result;
}
