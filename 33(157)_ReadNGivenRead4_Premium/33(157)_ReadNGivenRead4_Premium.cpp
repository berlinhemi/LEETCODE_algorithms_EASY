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
#include <cmath>
#include <vector>
#include <unordered_set>

#include "API.h"

class Solution {
private:
    static const int block_size = 4;
    FileReader reader;
public:
    Solution(const char* file_content) : reader(file_content) {}
    void reset() { reader.reset(); }
    int read(char* buf, int n)
    {
        char block[block_size]{};
        int total_chars_read = 0;

        int iterations = static_cast<int>(std::ceil((double)n / block_size));
        for (int i = 0; i < iterations; i++)
        {
            memset(block, 0, block_size);
            int chars_last_read = reader.read4(block);
            // last iteration
            if (i == iterations - 1)
            {   
                int remains_chars = n - (iterations - 1) * block_size;
                memcpy(buf + total_chars_read, block, remains_chars);
                total_chars_read += remains_chars;
            }
            else
            {
                memcpy(buf + total_chars_read, block, chars_last_read);
                total_chars_read += chars_last_read;
            }
        }
        return total_chars_read;
        
    }
};

int main()
{
    //const char* test_file = "abcdefghijklmnopqrstuvwxyz";

    std::vector<std::string> test_data { "", "abc", "abcdefghijklmn" };

    for (const std::string& file_data : test_data)
    {
        Solution s(file_data.c_str());
        std::cout << "File content: " << file_data << std::endl;
        for (int i = 0; i <= file_data.size(); i++)
        {
            char* buf = new char[file_data.size() + 1];
            memset(buf, 0, file_data.size() + 1);
            s.read(buf, i);
            std::cout << " Target chars count:" << i 
                << " Result:" << buf << std::endl;
            s.reset();
            delete[] buf;
        }
    }

}