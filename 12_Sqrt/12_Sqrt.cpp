
#include <iostream>
#include "12_Sqrt.h"

/* Given a non - negative integer x, 
sreturn the square root of x rounded down to the nearest integer.
The returned integer should be non - negative as well.

You must not use any built - in exponent function or operator.
*/
__int64 Solution::mySqrt(__int64 x)
{
	__int64 root = 0;
	__int64 original = x;
	__int64 prev = 0;
	while (x * x > original)
	{
		prev = x;
		x /= 2;
	}

	if (x * x == original)
	{
		return x;
	}
		
	root = binarySqrtSearch(x, prev, original);		
	
	return root;

}


__int64 Solution::binarySqrtSearch(__int64 x, __int64 prev, __int64 original)
{
	__int64 root = 0;
	while (prev - x != 1 )
	{
		root = x + (prev - x) / 2;
		if(root * root == original)
			return root;
		else if (root * root < original)
			x = root;
		else
			prev = root;
	}
	return x;
}
