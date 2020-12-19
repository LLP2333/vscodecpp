/*本程序用来实现输入两个数，并将两个数进行交换*/
#include<stdio.h>
#include<stdlib.h>
void Swap(int *x ,int *y);
int main(void)
{
  int a,b;
  printf("Please enter a,b:");
  scanf("%d,%d",&a,&b);
  printf("Before swap:a=%d,b=%d\n",a,b);
  Swap(&a,&b);
  printf("After swap :a=%d,b=%d\n",a,b);
  system("pause");
  return 0;
}
/*
void Swap(int *x,int *y)
{
    int *temp;
    *temp=*x;
    *x=*y;
    *y =*temp;
}
*/
void Swap(int *x,int *y)
{
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
}