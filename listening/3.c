//编写一个函数，求满足：除3余1，除5余3，除7余4的最小数
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n;
    for(n=1;;n++)
    {
        if((n%3==1)&&(n%5==3)&&(n%7==4))
        {
            printf("the min n=%d",n);
            break;

        }


    }
    system("pause");
}