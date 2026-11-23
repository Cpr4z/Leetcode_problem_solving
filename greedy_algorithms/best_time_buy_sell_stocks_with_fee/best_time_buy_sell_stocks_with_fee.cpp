#include "best_time_buy_sell_stocks_with_fee.hpp"

int maxProfit(vector<int>& prices, int fee) {
    // максимальный денежный результат среди вариантов, в которых акции на руках нет.
    int cash = 0;
    // максимальный денежный результат среди вариантов, в которых акция на руках есть.
    int hold = -prices.front();
    for (int i = 1; i < prices.size(); ++i) {
        const int price = prices[i];

        const int new_cash = std::max(cash, // Остаться без акции, ничего не делать.
                                      hold + price - fee // Продать акцию сегодня.
                                      );

        const int new_hold = std::max(hold, // Продолжать держать ранее купленную акцию.
                                      cash - price // Купить сегодня.
                                      );

        cash = new_cash;
        hold = new_hold;
    }

    return cash;
}