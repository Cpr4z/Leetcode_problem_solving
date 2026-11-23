#include "best_time_buy_sell_stocks_ii.hpp"

int maxProfit(vector<int>& prices) {
    int max_profit = 0;
    for (int sell = 1; sell < prices.size(); ++sell) {
        if (prices[sell] > prices[sell - 1]) {
            max_profit += prices[sell] - prices[sell - 1];
        }
    }

    return max_profit;
}