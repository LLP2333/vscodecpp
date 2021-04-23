#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    float n,m;
    float sum,sum1=0,sum2=0;
    float k;
    int t=1;
    for(n=20;n<=50;n++)
    {
     sum1=sum1+n*n;
    }
    for(m=1;m<=10;m++)
    {
        t=-t; 
        sum2=sum2+t*(1.0/m);
    }
    sum=sum1+sum2;
    printf("½á¹ûÊÇ%f",sum);
    system("pause");
}