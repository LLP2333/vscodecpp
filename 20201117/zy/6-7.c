#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int  year,sum;
    sum=10000;
    double n;//年增长率
    printf("The industrial output value is one million yuan this year\n");
    printf ("Please enter the growth rate of output value（The growth rate is expressed in decimal form）\n");
    scanf("%lf",&n);
    for(year=1;;year++)
    {
        sum=sum*(1+n);
        if (sum>=20000)
       { 
           printf("Industrial output can be doubled after at least %d year\n",year);
           break;
        }
    }
    system("pause");



}