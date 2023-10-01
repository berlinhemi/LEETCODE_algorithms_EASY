#include "11_AddBinary.h"

char Solution::SumBinDigits(char a, char b, char& rem)
{
	char result = '0';

	if (a == '0' && b == '0')
	{
		if (rem == '1')
		{
			result = '1';
			rem = '0';
		}
			
	}
	else if (a == '1' && b == '1')
	{
		if (rem == '1')
			result = '1';
		else
		{
			result = '0';
			rem = '1';
		}	
	}
	else
	{
		if (rem == '1')
			result = '0';
		else
			result = '1';
	}
	return result;
}


std::string Solution::addBinary(std::string a, std::string b)
{
	std::string result;
	std::string long_str = a.length() > b.length() ? a : b;
	std::string short_str = a.length() <= b.length() ? a : b;

	char rem = '0';
	for (int i = long_str.length() - 1, j = short_str.length() - 1; i >= 0; i--, j--)
	{
		if (j >= 0)
		{
			long_str[i] = SumBinDigits(long_str[i], short_str[j], rem);
		}
		else
		{	
			long_str[i] = SumBinDigits(long_str[i], '0', rem);
			if (rem == '0')
				break;
		}	
	}
	if (rem == '1')
	{
		long_str = "1" + long_str;
	}
	return long_str;
}