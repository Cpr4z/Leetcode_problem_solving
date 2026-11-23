#include "tourist's_route.hpp"

#include <unordered_set>
#include <unordered_map>

vector<string> route(vector<vector<string>> tickets) {
    std::unordered_set<std::string> dest_cities;
    std::unordered_map<std::string, std::string> cities_table;
    for (const auto& ticket : tickets) {
        dest_cities.insert(ticket[1]);
        cities_table[ticket[0]] = ticket[1];
    }

    std::string start_city{};
    for (const auto& [city, neighbour] : cities_table) {
        if (!dest_cities.contains(city)) {
            start_city = city;
            break;
        }
    }

    std::vector<std::string> result {start_city};
    for (int i = 0; i < tickets.size(); ++i) {
        result.push_back(cities_table[result.back()]);
    }

    return result;
}
