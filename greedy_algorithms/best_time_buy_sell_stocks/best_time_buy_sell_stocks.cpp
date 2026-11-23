#include "best_time_buy_sell_stocks.hpp"

// Input: prices = [7,1,5,3,6,4]


int maxProfit(vector<int>& prices) {
    if (prices.size() < 2) {
        return 0;
    }

    int max_profit = 0;
    int min_price = prices.front();
    for (int sell = 1; sell < prices.size(); ++sell) {
        int profit = prices[sell] - min_price;
        max_profit = std::max(profit, max_profit);
        min_price = std::min(min_price, prices[sell]);
    }

    return max_profit;
}
