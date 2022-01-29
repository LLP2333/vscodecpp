/*
经验证数组输出的a与a[0]地址是一样的 
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[3]={1,2,3};
    printf("a=%p,a[0]=%p",a,&a[0]);
    system("pause");
}