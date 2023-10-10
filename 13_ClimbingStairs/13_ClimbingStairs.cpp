// 13_ClimbingStairs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "13_ClimbingStairs.h"

int Solution::fact(int n)
{
	int res = 1;
	for (int i = 2; i <= n; i++)
	{
		res *= i;
	}
	return res;
}
int Solution::climbStairs_rec(int n)
{
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;
	return climbStairs_rec(n - 1) + climbStairs_rec(n - 2);
}

int Solution::climbStairs(int n)
{
	int count = 1; // with step=1
	// 1 1 1 1 1 1
	//  2  1 1 1 1 :add one 2
	//  2   2  1 1 :add second 2
	//  2   2   2  :ass third 3
	// and so on...
	for (int i = 1; i <= n / 2; i++)
	{
		//how many ways are there to place k twos in n places?
		int numemator = fact(n - i);
		int denumenator = fact((n - i) - i) * fact(i);
		count += numemator / denumenator;
			
	}
	return count;
}