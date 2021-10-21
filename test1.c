#include<stdio.h>
#include<stdlib.h>
//查找元素90
int main(void)
{
    int a[10]={1,3,5,64,72,90,100,103,223,0};
    int search;
    for(search=0;search<10;search++)
    {
        if(a[search]==90)
        printf("%d\n",search);

    }
    system("pause");
}