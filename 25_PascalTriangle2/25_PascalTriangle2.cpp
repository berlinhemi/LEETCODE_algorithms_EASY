
#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> getRow(int rowIndex) 
    {
        if (rowIndex == 0)
            return { 1 };
        std::vector<int> curr{ 1,1 };
        if (rowIndex == 1)
            return curr;
        
        for (int i = 2; i <= rowIndex; i++)
        {
            std::vector<int> next(curr.size() + 1, 1);
            for (int j = 1; j < curr.size(); j++)
            {
                next[j] = curr[j - 1] + curr[j];
            }
            curr = next;
        }
        return curr;

    }
    
};

int main()
{
    Solution s;
    std::vector<int> result = s.getRow(6);
    for (int e : result)
    {
        //for (int e : v)
        {
            std::cout << e << " ";
        }
        //std::cout << std::endl;
    }
    std::cout << std::endl;
}
