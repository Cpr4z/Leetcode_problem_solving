#include "find_competition_winner.hpp"

#include <unordered_map>

vector<int> findCompetitionWinners(vector<vector<vector<int>>> statistics) {
    std::unordered_map<int, std::pair<int, int>> users_stat;
    int maxCountSteps = 0;
    for (const auto& day_stat : statistics) {
        for (const auto& user_day_stat : day_stat) {
            int id = user_day_stat[0];
            int steps_count = user_day_stat[1];
            if (users_stat.find(id) == users_stat.end()) {
                users_stat.insert({id, {0, 0}});
            }

            ++users_stat[id].first;
            users_stat[id].second += steps_count;
            if (users_stat[id].first == statistics.size()) {
                maxCountSteps = std::max(maxCountSteps, users_stat[id].second);
            }
        }
    }

    std::vector<int> result;
    for (const auto& [id, user_stat] : users_stat) {
        if (user_stat.first == statistics.size() && user_stat.second == maxCountSteps) {
            result.push_back(id);
        }
    }

    return result;
}