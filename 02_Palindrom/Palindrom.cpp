
//Given an integer x, return true if x is a palindrome, and false otherwise.

#include "Palindrom.h"


unsigned Solution::get_num_of_digits(unsigned i)
{
    return i > 0 ? (int)log10((double)i) + 1 : 1;
}

//digit_no:0,1,2,... from letf to right
int Solution::get_nth_digit(int x, int digit_no)
{
    x /= pow(10, digit_no);
    return x - (x / 10) * 10;
}

bool Solution::isPalindrome(int x) {
    if (x < 0)
        return false;
    int n = get_num_of_digits(x);
    for (int i = 0; i < n/2; i++)
    {
        if (get_nth_digit(x,i) != get_nth_digit(x,n - i - 1))
            return false;
    }
    return true;
}




