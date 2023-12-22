//
// Created by Administrator on 2023/12/22.
//
// 常量
#include <stdio.h>

int main()
{
    printf("请输入：\n");
    const int C = 5;
    int a, b;

    scanf("%d %d", &b, &a);
    printf("%d %d\n",C - b, C - a);
}
