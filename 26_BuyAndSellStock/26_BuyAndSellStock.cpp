
#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:

   
    int maxProfit(std::vector<int>& prices)
    {
        int profit = 0;
        int sell_price = 0;
        int buy_price = prices[0];

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < buy_price)
                buy_price = prices[i];
            else
            {
                // calculate current profit
                if (prices[i] - buy_price > profit)
                    profit = prices[i] - buy_price;
            }
        }
        return profit;
    }
};

int main()
{
    Solution s;
    std::vector<int> prices1{ 4,7,2,1 };
    std::vector<int> prices2{1,2,4,2,5,7,2,4,9,0,9};
    std::vector<int> prices3{10, 9, 4, 2, 1};
    
    std::cout << s.maxProfit(prices1) << std::endl;
    std::cout << s.maxProfit(prices2) << std::endl;
    std::cout << s.maxProfit(prices3) << std::endl;

    //for (int e : result)
    //{
    //    //for (int e : v)
    //    {
    //        std::cout << e << " ";
    //    }
    //    //std::cout << std::endl;
    //}
}