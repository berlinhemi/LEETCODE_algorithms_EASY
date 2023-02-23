// 09_LengthOfLastWord.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "09_LengthOfLastWord.h"

int Solution::lengthOfLastWord(std::string s)
{
	int last_len = 0;
	int i = s.length() - 1;
	while ( i >= 0 && s[i] == ' ' )
	{
		i--;
	}	
	while (i >= 0 && s[i] != ' '  )
	{
		last_len++;
		i--;
	}
	return last_len;
}
