//
// Created by Administrator on 2023/12/21.
//
#include <stdio.h>

int main() {
    // 内存换算
    float memory = 4448; //MB
    float memory_kb = memory * 1024;
    float memory_byte = memory_kb * 1024;
    printf("%.0f MB = %.0f Byte", memory, memory_byte);
    return 0;
}
