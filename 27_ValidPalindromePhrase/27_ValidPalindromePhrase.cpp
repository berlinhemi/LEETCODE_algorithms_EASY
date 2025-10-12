#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:


    bool isPalindrome(std::string s) 
    {
		int i = 0;
		int j = s.size() - 1;

		while (i <= j)
		{
			bool i_ok = isalnum(tolower(s[i]));
			bool j_ok = isalnum(tolower(s[j]));

			if (i_ok && j_ok)
			{
				if (tolower(s[i]) != tolower(s[j]))
					return false;
				i++;
				j--;
			}
			else
			{
				if (!i_ok)
					i++;
				if (!j_ok)
					j--;
			}
		}
			return true;
    }
};

int main()
{
    Solution s;
    std::string phrase1 = "abccba";
    std::string phrase2 = "A man, a plan, a canal: Panama";
    std::string phrase3 = "race a car";
    std::string phrase4 = " ";
    

    std::cout << s.isPalindrome(phrase1) << std::endl;
    std::cout << s.isPalindrome(phrase2) << std::endl;
    std::cout << s.isPalindrome(phrase3) << std::endl;
    std::cout << s.isPalindrome(phrase4) << std::endl;

}