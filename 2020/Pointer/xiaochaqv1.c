/*上次上机考试遇到了
自定义函数开头#define FU(m,n) (m/n)的错误
应改为#define FU(m,n) (m)/(n)
因为
 #define FU(m,n) (m/n)这种写法有问题。
 假入你传入的是FU(1+2, 2+1)，在预编译是否就是1+2/2+1，结构是3。
 其实你预期的结果是1.所以要写成#define FU(m,n) (m)/(n)
 本程序用来验证一下
 */
#include<stdio.h>
#include<stdlib.h>
#define FU(m,n)   (m)/(n)
int main(void)
{
    int m,n;
    printf("Please input m,n:");
    scanf("%d %d",&m,&n);
    printf("m/n=%d",FU(m,n));//这里的结果为整除的结果
    system("pause");
}