//该程序用来判断函数的奇偶性
#include<stdio.h>
#include<stdlib.h>
int  main(void)
{
	int n;
	printf("输入一个整数n：");
	scanf("%d",&n);
	if(0==(n%2))
	{
	printf("该整数为偶数");
    }
    else
    {
	printf("该整数为奇数"); 
	}
    system("pause");
	return 0;
 }
