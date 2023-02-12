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
	int braces = 0;
	int curly_braces = 0;
	int square_brackets = 0;

	for (char e : s)
	{
		switch (e)
		{
			case '(':
			{
				braces++;
				break;
			}
			case ')':
			{
				braces--;
				break;
			}
			case '{':
			{
				curly_braces++;
				break;
			}
			case '}':
			{
				curly_braces--;
				break;
			}
			case '[':
			{
				square_brackets++;
				break;
			}
			case ']':
			{
				square_brackets--;
				break;
			}
		}
		if (braces < 0 || curly_braces < 0 || square_brackets < 0)
		{
			return false;
		}
	}
	return braces == curly_braces == square_brackets == 0;
}
