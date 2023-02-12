/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/
#include "04_ValidParentheses.h"

bool Solution::isValid(std::string s)
{
	int total = 0;
	char prev = 0;
	int braces = 0;
	int between_braces = 0;
	int curly_braces = 0;
	int between_curly_braces = 0;
	int square_brackets = 0;
	int between_square_brackets = 0;

	for (char e : s)
	{
		/*if (prev == '(')
			if ( e == ']' || e == '}')
				return false;

		if (prev == '[')
			if (e == ')' || e == '}')
				return false;

		if (prev == '{')
			if (e == ')' || e == ']')
				return false;*/
		total++;
		switch (e)
		{
			case '(':
			{	
				braces++;
				if (braces == 1)//first brace
					between_braces = total;
				break;
			}
			case ')':
			{
				braces--;
				if (braces == 0)//found closed brace
				{
					between_braces = total - between_braces - 1;
					if (between_braces % 2 != 0)
						return false;
				}
					
				break;
			}
			case '{':
			{
				curly_braces++;
				if (curly_braces == 1)//first brace
					between_curly_braces = total;
				break;
			}
			case '}':
			{
				curly_braces--;
				if (curly_braces == 0)//found closed brace
				{
					between_curly_braces = total - between_curly_braces - 1;
					if (between_curly_braces % 2 != 0)
						return false;
				}
					
				break;
			}
			case '[':
			{
				square_brackets++;
				if (square_brackets == 1)//first brace
					between_square_brackets = total;
				break;
			}
			case ']':
			{
				square_brackets--;
				if (square_brackets == 0)//found closed brace
				{
					between_square_brackets = total - between_square_brackets - 1;
					if (between_square_brackets % 2 != 0)
						return false;
				}
					
				break;
			}
		}
		prev = e;
		if (braces < 0 || curly_braces < 0 || square_brackets < 0)
		{
			return false;
		}
	}
	return braces == 0 && curly_braces == 0 && square_brackets == 0;
}
