
#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:

   
    int maxProfit(std::vector<int>& prices)
    {
        std::vector<int> profits = getProfits(prices);

        for (int e : profits)
        {
            std::cout << e << " ";

        }
        std::cout << std::endl;
        auto maxProfit = std::max_element(profits.begin(), profits.end());

        
        return (maxProfit == profits.end()) ? 0 : *maxProfit;
    }

private:
    std::vector<int> getProfits(std::vector<int>& prices)
    {
        std::vector<int> profits;

        int sell_price = 0;
        int buy_price = prices[0];

        for (int i = 1; i < prices.size(); i++)
        {
            // Detect price increasing
            if (prices[i - 1] <= prices[i])
            {
                // save profit if current price is good
                if (prices[i] >= sell_price)
                    if (prices[i] > buy_price) {
                        std::cout << "add 1:" << prices[i] - buy_price << std::endl;
                        profits.push_back(prices[i] - buy_price);
                    }
                sell_price = prices[i];
            }
            // Price started to fall
            else
            {
                // save profit 
                if (sell_price > buy_price) {
                    
                    std::cout << "add 2:" << sell_price - buy_price << std::endl;
                        profits.push_back(sell_price - buy_price);
                }
                // update best price
                if (buy_price > prices[i])
                {
                    buy_price = prices[i];
                    // reset sell price
                    sell_price = 0;
                }
            }
        }
        return profits;
    }
};

int main()
{
    Solution s;
     std::vector<int> prices{ 4,7,2,1 };
    //std::vector<int> prices{10, 9, 4, 2, 1};
    int profit = s.maxProfit(prices);
    //for (int e : result)
    //{
    //    //for (int e : v)
    //    {
    //        std::cout << e << " ";
    //    }
    //    //std::cout << std::endl;
    //}
    std::cout << profit<< std::endl;
}