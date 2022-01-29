#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int n=1;
    float sum=1,term=1,t=1;
    do {
        t=t*n;
        term =1/t;
        sum=sum+term;
        n++;
    }while(fabs(term)>=1e-5);
    printf("e=%f\n",sum);
    system("pause");
    return 0;

}