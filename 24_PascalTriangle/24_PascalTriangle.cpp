
#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) 
    {
        std::vector<std::vector<int>> result;
        result.push_back({1});
        if (numRows == 1)
            return result;

        std::vector<int> curr{ 1,1 };
        result.push_back(curr);

        for (int i = 3; i <= numRows; i++)
        {
            // fill next row with '1'
            std::vector<int> next(curr.size() + 1, 1);
            for (int j = 1; j < curr.size(); j++)
            {
                next[j] = curr[j-1] + curr[j];
            }
            result.push_back(next);
            curr = next;
        }
        return result;
    }
};

int main()
{
    Solution s;
    std::vector<std::vector<int>> result = s.generate(5);
    for (std::vector<int> v : result)
    {
        for (int e : v)
        {
            std::cout << e << " ";
        }
        std::cout << std::endl;
    }

}
