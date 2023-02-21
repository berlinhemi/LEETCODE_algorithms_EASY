/*
* Since it is impossible to change the length of the array in some languages, 
you must instead have the result be placed in the first part of the array nums. 
More formally, if there are k elements after removing the duplicates, 
then the first k elements of nums should hold the final result.
It does not matter what you leave beyond the first k elements.
Return k after placing the final result in the first k slots of nums.
Do not allocate extra space for another array. 
You must do this by modifying the input array in-place with O(1) extra memory.
*/

#include "06_RemoveDuplicatesFromSortedArray.h"


int Solution::removeDuplicates(std::vector<int>& nums)
{
	int insert_pos = 1;
	int i = 1;
	while (i < nums.size())
	{
		if (nums[i - 1] != nums[i])
		{
			nums[insert_pos] = nums[i];
			insert_pos++;
		}
		i++;
	}
	return insert_pos;
}
