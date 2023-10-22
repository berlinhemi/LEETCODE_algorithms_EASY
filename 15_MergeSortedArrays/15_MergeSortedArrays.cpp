#include "15_MergeSortedArrays.h"

#include <queue>


void Solution::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{

	//for (int i = 0, j = 0; i < m + n && j < n;);
	std::queue<int> q;
	int i = 0;
	int j = 0;
	while (i < m + n )
	{
		if (!q.empty() && nums2[j] > q.front())
		{
			if (nums1[i] == 0)
			{
				nums1[i] = q.front();
			}
			else if (nums1[i] > q.front() )
			{
				q.push(nums1[i]);
				nums1[i] = q.front();
			}
			q.pop();
		}
		else if (nums1[i] == 0)
		{
			nums1[i] = nums2[j];
			j++;
		}
		else if (nums1[i] > nums2[j])
		{
			q.push(nums1[i]);
			nums1[i] = nums2[j];
			j++;
		}
		i++;
	}
}
