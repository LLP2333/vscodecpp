#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int n;
	 int  a,b,c;
     int t;
	 scanf ("%d",&n);
	 a = n%10;    	 // 取个位数
	 b = n/10%10   ;  // 取十位数
	 c = n/100    ;   // 取百位数
     t=a+10*b+100*c;
	 printf("%d%d%d\n",t);
     system("pause");
	 return 0;

}