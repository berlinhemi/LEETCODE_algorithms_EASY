// 10_PlusOne.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer.
The digits are ordered from most significant to least significant in left-to-right order.
The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.

Input: digits = [1,2,3]
Output: [1,2,4]

Input: digits = [9]
Output: [1,0]
*/
#include "10_PlusOne.h"

int Solution::getNextDigitWithCarry(int value, bool& carry)
{
	if (value == 9 && carry)
	{
		carry = true;
		return 0;
	}
	else
	{
		int result = value + carry;
		carry = false;
		return result;
	}
}

std::vector<int> Solution::plusOne(std::vector<int>& digits)
{
	std::vector<int> result(digits.size());

	bool carry = true;
	for (int i = digits.size() - 1; i >= 0; i--)
	{
		result[i] = getNextDigitWithCarry(digits[i], carry);
		..if there is a carry at the end
		if (i == 0 && carry)
		{
			result.insert(result.begin(), 1);
		}
	}

	return result;
}
