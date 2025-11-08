#pragma once
#include <cstring>
#include <algorithm>

class FileReader {
private:
    const char* file_content;
    int current_pos;
    int file_size;

public:
    FileReader(const char* content) : file_content(content), current_pos(0) {
        file_size = strlen(content);
    }

    // Mock read4 API
    int read4(char* buf4) {
        int chars_to_read = std::min(4, file_size - current_pos);
        if (chars_to_read <= 0) {
            return 0;
        }

        memcpy(buf4, file_content + current_pos, chars_to_read);
        current_pos += chars_to_read;
        return chars_to_read;
    }

    // Reset to beginning of file
    void reset() {
        current_pos = 0;
    }
};