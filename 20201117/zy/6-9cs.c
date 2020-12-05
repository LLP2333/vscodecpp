#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n=1;
float e=1,t=1,f=1;
do{
f=f*n;
t=1/f;
e=e+t;
n++;
}while (t>=1e-5);
printf("e=%f\n",e);
system("pause");
return 0;
}