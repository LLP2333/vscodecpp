/*模拟按引用调用的例子*/
#include<stdio.h>
#include<stdlib.h>
void Fun(int *par);
int main(void)
{
  int arg =1;
  printf("arg = %d\n",arg);
  Fun(&arg);
  printf("arg = %d\n",arg);
  system("pause");
  return 0;
}
void Fun(int *par)
{
    printf("par = %d\n",*par);
    *par =2;
}