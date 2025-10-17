#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) 
    {

        return std::accumulate(nums.begin(), nums.end(), 0,
                [](int res, int x) { return res ^ x; });
    }

};

int main()
{
    Solution s;
    std::vector<int> v1{ 4,1,2,1,2};
    std::vector<int> v2{ 4,1,2,1,4,5,2};

    std::cout << s.singleNumber(v1) << std::endl;
    std::cout << s.singleNumber(v2) << std::endl;
}

