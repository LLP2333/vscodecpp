/*模拟按引用调用的例子*/
#include<stdio.h>
#include<stdlib.h>
void Fun(int *par);
int main(void)
{
  int arg =1;
  printf("arg = %d\n",arg);
  Fun(&arg);/*将arg的地址传入函数*/
  printf("arg = %d\n",arg);
  system("pause");
  return 0;
}
void Fun(int *par)
{
    printf("par = %d\n",*par);/*输出形参指向的变量的值*/
    *par =2;/*改变形参指向的变量的值*/
}