#include "11_AddBinary.h"

char Solution::AddDigit(char a, char b, char& rem);
{

}

std::string Solution::addBinary(std::string a, std::string b)
{
	std::string result;
	int max_len = a.length() > b.length() ? a.length() : b.length();

	
	for (int i = a.length() - 1, j = b.length() - 1, int k = 0;
		i > 0 && j > 0;
		i++, j++, k++)
	{
		char rem = '0';
		char d = AddDigit(a[i], b[j], rem);
		result = d + result;
	}
}