//通过编程实现显示用户输入的月份拥有的天数。
#include<stdio.h>
#include<stdlib.h>
#define MONTHS 12
int main(void)
{
    int day[MONTHS] ={31,28,31,30,31,30,31,31,30,31,30,31};
    int month;
    do{
        printf("input a month:");
        scanf("%d",&month);
    }while(month<1||month>12);
    printf("The number of days  is %d\n",day[month-1]);
    system("pause");
    return 0;
}