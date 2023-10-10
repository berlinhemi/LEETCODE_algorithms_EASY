// 13_ClimbingStairs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "13_ClimbingStairs.h"


int Solution::climbStairs(int n)
{
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;
	return climbStairs(n - 1) + climbStairs(n - 2);
}

