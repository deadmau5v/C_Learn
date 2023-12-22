//
// Created by Administrator on 2023/12/22.
//
#include <stdio.h>

int main ()
{
    double foot, inch;
    printf("输入 foot 值: \n");
    scanf("%lf", &foot);
    printf("输入 inch 值: \n");
    scanf("%lf", &inch);

    printf("身高是%.2lf米. \n",
           ((foot + inch / 12) * 0.3048)
           );

    printf("10*3/3 = %f \n",
           (3.3333333 * 3 )
           );
    return 0;
};
