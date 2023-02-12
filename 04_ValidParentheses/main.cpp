#include <iostream>
#include "04_ValidParentheses.h"

int main()
{
    Solution s;
    std::cout << s.isValid("()[]{}") << std::endl;
    std::cout << s.isValid("([]){([])}") << std::endl;
    std::cout << s.isValid("(([]){})") << std::endl;

    std::cout << s.isValid("[([]])") << std::endl;//should be false
    std::cout << s.isValid("[({])}") << std::endl;//should be false


    std::cout << s.isValid("([)]") << std::endl;
    std::cout << s.isValid("([") << std::endl;
    std::cout << s.isValid("([)]{}") << std::endl;
    std::cout << s.isValid("((([]){)})") << std::endl;
    std::cout << s.isValid("))(([]{}") << std::endl;
    std::cout << s.isValid("()[]{}}}{{") << std::endl;
    std::cout << s.isValid("()[]{") << std::endl;
    std::cout << s.isValid("()[]}") << std::endl;
}

