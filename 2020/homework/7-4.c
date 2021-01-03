/*采用穷举法 ，用函数编程实现计算两个正整数的最小公倍数的函数，在主函数中调用该函数计算并输出
从键盘任意输入的两整数的最小公倍数*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int m,n,k;
    printf("please input two integer\n");
    scanf("%d,%d",&m,&n);
    k=lcm(m,n);
    printf("least common multiple=%d\n",k);
    system("pause");
    return 0;


}
int lcm(int a,int b)
{
    int t;
    for(t=1;;t++)
    {
        if()
    }
}
//2020