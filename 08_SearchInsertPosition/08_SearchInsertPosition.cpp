/*
Given a sorted array of distinct integers and a target value, return the index if the target is found.
If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/

#include <iostream>
#include "08_SearchInsertPosition.h"

int Solution::searchInsert(std::vector<int>& nums, int target)
{
	int begin = 0;
	int end = nums.size();
	int mid = 0;
	while (end - begin > 0)
	{
		mid = begin + (end - begin) / 2;
		if (nums[mid] == target)
		{
			return mid;
		}
		else if (end - begin == 1)
			break; 
		if (nums[mid] < target)
		{		
			begin += (end - begin) / 2;
		}
		else
		{
			end -= (end - begin) / 2;
		}	
	}
	return target < nums[0] ? mid : mid + 1;
}
