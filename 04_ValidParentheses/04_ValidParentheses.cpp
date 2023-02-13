/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/
#include "04_ValidParentheses.h"


bool Solution::NextBraceIsValid(char prev, char next)
{
	switch (prev)
	{
		case '(':
		{
			if (next == ']' || next == '}')
				return false;
			break;
		}
		case '[':
		{
			if (next == ')' || next == '}')
				return false;
			break;
		}
		case '{':
		{
			if (next == ')' || next == ']')
				return false;
			break;
		}
		/*default:
		{
			throw std::runtime_error("invalide brace type obtained");
			break;
		}*/
	}
	
	return true;
}
bool Solution::isValid(std::string s)
{
	char prev = '-';

	int total = 0;
	int round_braces = 0;
	int square_brackets = 0;
	int curly_braces = 0;

	int between_round_braces = 0;
	int between_curly_braces = 0;
	int between_square_brackets = 0;

	for (char e : s)
	{
		total++;

		if (!NextBraceIsValid(prev, e))
		{
			return false;
		}
		
		switch (e)
		{
			case '(':
			{	
				round_braces++;
				//first brace
				if (round_braces == 1)
					between_round_braces = total;
				break;
			}
			case ')':
			{
				round_braces--;
				//corresponding closed bracket was found
				if (round_braces == 0)
				{
					between_round_braces = total - between_round_braces - 1;
					//number of brackets must be even
					if (between_round_braces % 2 != 0)
						return false;
				}
				break;
			}
			case '{':
			{
				curly_braces++;
				//first brace
				if (curly_braces == 1)
					between_curly_braces = total;
				break;
			}
			case '}':
			{
				curly_braces--;
				//corresponding closed bracket was found
				if (curly_braces == 0)
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
				if (square_brackets == 0)//corresponding closed bracket was found
				{
					between_square_brackets = total - between_square_brackets - 1;
					if (between_square_brackets % 2 != 0)
						return false;
				}
				break;
			}
		}

		prev = e;

		if (round_braces < 0 || curly_braces < 0 || square_brackets < 0)
		{
			return false;
		}
	}
	return round_braces == 0 && curly_braces == 0 && square_brackets == 0;
}
