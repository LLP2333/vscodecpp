//�ó���������ʾ���ʹ�õݹ麯���������������Fibonacci����Ϊ����
//ͬʱ��ӡ�����������ÿһ����Ҫ�ĵݹ���ô���
#include<stdio.h>
#include<stdlib.h>
long Fib(int n);
int count;
int  main(void)
{
    int n,i,x;
    printf("Input n:");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         count =0;
         x= Fib(i);
         printf("Fib(%d) = %d,count = %d\n",i,x,count);
     }
     system("pause");
     return 0;
}

long Fib(int n)
{
   count++;
   if(0==n)
   {
       return 0;
   }
   else if(1==n)
   {
       return 1;
   }
   else
   {
       return (Fib(n-1)+Fib(n-2));
   }
   
}