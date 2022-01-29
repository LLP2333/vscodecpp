/*用函数编程计算两整数的最大值，在主函数中调用从键盘任意输入的两整数的最大值*/
#include<stdio.h>
#include<stdlib.h>
int bigger(int ,int );
int main()
{
    int m,n,max;
    printf("please input two  integer\n");
    scanf("%d,%d",&m,&n);
    max=bigger(m, n);//注意这个地方函数的输入
    printf("max=%d",max);
    system("pause");
    return 0;

}
int bigger(int a,int b)
{
    int t;
    if(a>=b)
    {
        t=a;
    }
    else
    {
        t=b;
    }
    return t;

    
}
//2020