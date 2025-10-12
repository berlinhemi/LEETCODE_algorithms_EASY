#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:


    bool isPalindrome(std::string s) 
    {
    
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