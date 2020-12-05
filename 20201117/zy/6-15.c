#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int m,n;
    printf("The chicken and rabbit have a total of 98 heads and 386 feet.\n");
    printf("Chicken and rabbit with cage results\n");
    for(m=1;m<=98;m++)
    {
        n=98-m;
        if(386==2*m+4*n)
        printf("chicken=%d,rabbit=%d\n",m,n);
    }
    system("pause");
}