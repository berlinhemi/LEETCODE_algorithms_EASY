#include "15_MergeSortedArrays.h"

#include <queue>


void Solution::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{

	std::queue<int> q;
	int i = 0;
	int j = 0;
	while (i < m + n)
	{
		if (i < m)
		{
			if (q.empty())
			{
				if (j < n)
				{
					if (nums1[i] > nums2[j])
					{
						q.push(nums1[i]);
						nums1[i] = nums2[j];
						j++;
					}
				}
			}
			else
			{
				int q_item = q.front();
				if (j < n)
				{
					if (q_item <= nums2[j] && q_item < nums1[i])
					{
						q.push(nums1[i]);
						nums1[i] = q_item;
						q.pop();
					}
					else if (nums2[j] <= q_item && nums2[j] < nums1[i])
					{
						q.push(nums1[i]);
						nums1[i] = nums2[j];
						j++;
					}
				}
				else
				{
					if (q_item < nums1[i])
					{
						q.push(nums1[i]);
						nums1[i] = q_item;
						q.pop();
					}
				}
			}
		}
		else
		{
			if (q.empty())
			{
				if (j < n)
				{
					nums1[i] = nums2[j];
					j++;
				}
			}
			else
			{
				int q_item = q.front();
				if (j < n)
				{
					if (q_item < nums2[j])
					{
						nums1[i] = q_item;
						q.pop();
					}
					else
					{
						nums1[i] = nums2[j];
						j++;
					}
				}
				else
				{
					nums1[i] = q_item;
					q.pop();
				}
			}
		}


		i++;
	}
}
