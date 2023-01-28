// Palindrom.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

//v1 - tostring
//#include <algorithm>
//#include <string>
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        std::string s = std::to_string(x);
//        return(std::equal(s.begin(), s.begin() + s.size() / 2, s.rbegin()));
//    }
//};


//v2 - array of digits
//#include <algorithm>
//#include <string>
//class Solution {
//public:
//    unsigned GetNumberOfDigits(unsigned i)
//    {
//        return i > 0 ? (int)log10((double)i) + 1 : 1;
//    }
//
//    bool isArrPalindrome(int* arr, int len)
//    {
//        int i = 0;
//        while (i < len/2)
//        {
//            if (arr[i] != arr[len - i - 1])
//                return false;
//            i++;
//        }
//        return true;
//    }
//
//    bool isPalindrome(int x) {
//        if (x < 0)
//            return false;
//        int *number = new int[GetNumberOfDigits(x)]{};
//        int i = 0;
//        while (x > 0)
//        {
//            int r = x - (x/10)*10;
//            //std::cout << r;
//            number[i] = r;
//            x /= 10;
//            i++;
//        }
//        return isArrPalindrome(number,i);
//    }
//};


//v3 - 
class Solution {
public:
    unsigned get_num_of_digits(unsigned i)
    {
        return i > 0 ? (int)log10((double)i) + 1 : 1;
    }

    //digit_no:0,1,2,... from letf to right
    int get_nth_digit(int x, int digit_no)
    {
        x /= pow(10, digit_no);
        return x - (x / 10) * 10;
    }

    bool isPalindrome(int x) {
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
};


int main()
{
    Solution s;
    //s.isPalindrome(10);
   // int arr[]{ 0,1 };
    //std::cout << s.isArrPalindrome(arr, sizeof(arr)/sizeof(4));
    std::cout << s.isPalindrome(1234321);
   //s.isPalindrome(12345);
}
 
