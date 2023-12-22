//
// Created by Administrator on 2023/12/22.
//
#include <stdio.h>

int main()
{
    int h1, m1;
    int h2, m2;

    h1 = 4;
    m1 = 24;

    h2 = 8;
    m2 = 10;

    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2 - t1;
    printf("时间差 %d小时 %d分钟 \n",t2 / 60,  t2 % 60);
    return 0;
}
