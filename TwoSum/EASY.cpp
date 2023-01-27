/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have EXACTLY ONE solution, and you may not use the same element twice.

You can return the answer in any order..
*/

#include <iostream>
#include <vector>
#include <map>

class Solution {
public:
    std::vector<int> twoSum(const std::vector<int>& nums, int target) {
        
        std::map<int, std::vector<int>> nums_map;

        for (int i = 0; i < nums.size(); i++)
        {
            nums_map[nums[i]].push_back(i);
        }
     
        for (int i = 0; i < nums.size(); i++)
        {

            int remains = target - nums[i];
            if (nums_map.find(remains) != nums_map.end())
            {

                if (remains == nums[i])
                { 
                    //founded same element or another element with same value.
                        
                    if(nums_map[remains].size() > 1)
                        //nums has two elements with value = remains
                        return { i ,nums_map[remains][1] };
                }
                else
                    return { i ,nums_map[remains][0] };
            }
            
            
        }
        return {};
    }
};

int main()
{
    Solution s;
    std::vector<int> v{ -1,-2,-3,-4,-5 };
    for (int e : s.twoSum(v, -8))
    {
        std::cout<<e<<" ";
    }
    return 0;
  
}
