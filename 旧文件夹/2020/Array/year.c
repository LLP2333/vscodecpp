//通过编程实现显示用户输入的月份拥有的天数。
#include<stdio.h>
#include<stdlib.h>
#define MONTHS 12
int main(void)
{
int day[2][MONTHS] =   {{31,28,31,30,31,30,31,31,30,31,30,31},
                        {31,29,31,30,31,30,31,31,30,31,30,31}};
                                    
    int year,month;
    do{
        printf("please input year,month:");
        scanf("%d %d",&year,&month);
    }while(month<1||month>12);
    if ((0 == year % 4 && 0 != year % 100) || 0 == year % 400)
    {
    printf("The number of days  is %d\n",day[1][month-1]);
    }
    else
    {
        printf("The number of days  is %d\n",day[2][month-1]);
    }
    system("pause");
    return 0;
}