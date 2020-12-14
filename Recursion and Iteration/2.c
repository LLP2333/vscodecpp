/*本程序用来检验全局变量的初值问题,经过 验证，未初始化
的全局变量为零，原因在于全局变量在静态数据段里， 这个数据段是被设置成零的
另外，补充说明：全局变量是在函数外声明的变量*/
#include<stdio.h>
#include<stdlib.h>
int n;
int main(void)
{
    printf("The n = %d",n);
    system("pause");
    return 0;
}