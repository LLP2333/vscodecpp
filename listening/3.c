//��дһ�������������㣺��3��1����5��3����7��4����С��
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