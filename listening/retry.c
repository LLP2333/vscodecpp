#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month;
    printf("please input year:");
    scanf("%d",&year);
    if((0 == year % 4 && 0 != year % 100) || 0 == year % 400)
    {
        int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    }
    else
    {
      int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    }
    printf("please ipput month:");
    scanf("%d",&month);
    printf("The month of %d in %d year have %d days",month,year,days[month-1]);
    system("pause");
    return 0;
    
    
}