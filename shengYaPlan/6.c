#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int n;
	 int  a,b,c;
     int t;
	 scanf ("%d",&n);
	 a = n%10;    	 // ȡ��λ��
	 b = n/10%10   ;  // ȡʮλ��
	 c = n/100    ;   // ȡ��λ��
     t=a+10*b+100*c;
	 printf("%d%d%d\n",t);
     system("pause");
	 return 0;

}