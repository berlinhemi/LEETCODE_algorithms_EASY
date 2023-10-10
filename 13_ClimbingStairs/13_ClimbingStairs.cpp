// 13_ClimbingStairs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "13_ClimbingStairs.h"

double Solution::fact(int n)
{
	double res = 1;
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

double Solution::climbStairs(int n)
{
	double count = 1; // with step=1
	// 1 1 1 1 1 1
	//  2  1 1 1 1 :add one 2
	//  2   2  1 1 :add second 2
	//  2   2   2  :add third 2
	// and so on...
	for (int i = 1; i <= n / 2; i++)
	{
		//how many ways are there to place k twos in n places?
		double numemator = fact(n - i);
		double denumenator = fact((n - i) - i) * fact(i);
		count += numemator / denumenator;
			
	}
	return count;
}