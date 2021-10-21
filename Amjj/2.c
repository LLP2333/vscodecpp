#include<stdlib.h>
#include<stdio.h>

int main()
{
     int t;
    scanf("%d",&t);
    int year;
    year=t+2020;
    int x;
     if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // 这里如果被 400 整数是闰年
            if ( year%400 == 0)
            x=1;
               // printf("%d 是闰年", year);
            else
            x=0;
               //printf("%d 不是闰年", year);
        }
        else
        x=1;
        //printf("%d 是闰年", year );
    }
    else
      x=0;
    //printf("%d 不是闰年", year);
    

}