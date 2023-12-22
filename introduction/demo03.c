//
// Created by Administrator on 2023/12/21.
//
#include <stdio.h>

int main() {
    // 变量
    int value1 = 1;
    int value_1 = 1;
    int Value_3 = 3;
    int _4Value = 4;  // 不能用数字开头
    float balance = 4564.545;

    // 不设置初始值
    int value2;
    int value3;
    int value4;

    value2 = 10;

    // 测试 打印三门成绩
    int math = 96;
    int english, sport;
    english = 50;
    sport = 50;

    int sum = math + english + sport;
    printf("total: %d\n", sum);

    printf("value sum address: [%p]\n", &sum);
    printf("value sum address: [%p]\n", &math);
    printf("value sum address: [%p]\n", &english);
    printf("value sum address: [%p]\n", &sport);
    return 0;
}