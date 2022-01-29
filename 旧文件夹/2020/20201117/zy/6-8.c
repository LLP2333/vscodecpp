#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int m=1;
    float PI=0,t=1;
    unsigned long term;
    do {
        m=pow(-1,(t+1));
       // printf("m=%d\n",m);
        t=2*t-1;
        term =(1.000000/t)*m;
        //printf("term=%lu\n",term);
        PI=PI+term;
        t++;
    }while(fabs(term)>=1e-4);
    printf("PI=%f\n",PI*4);
    system("pause");
    return 0;
}