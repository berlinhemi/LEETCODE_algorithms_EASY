/*
Problem Description
The API: int read4(char *buf4) reads 4 consecutive characters from a file and writes those characters into the buffer buf4.

Implement the function: int read(char *buf, int n) that reads n characters from the file and stores them in the buffer buf.

Note:

The read function may be called multiple times.

The read4 API is already defined for you.

You cannot modify the file except through the provided API.
*/

#include <iostream>
#include <unordered_set>

#include "API.h"

class Solution {
public:
    int read(char* buf, int n)
    {
    }
};

int main()
{
    const char* test_file = "abcdefghijklmnopqrstuvwxyz";

    FileReader reader(test_file);


  
}