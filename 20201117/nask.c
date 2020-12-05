#include<stdio.h>
#include<stdlib.h>
unsigned long Fact (unsigned int n);
int main()
{
    int m;
    int t;
    do {
        printf("input m(m>0):");
        scanf ("%d",&m );
    }while (m<0);
    t=Fact(m);
    printf("%d!=%1u\n",m,t);
    //printf ("%1u",t);
    system("pause");
    return 0;
    

}
unsigned long Fact(unsigned int n)
{
    unsigned int i;
    unsigned long result=1;
    printf("result=%1u\n",result);
    for (i=2;i<=n;i++)
   {  result *= i ;
  // result=1000;
    printf("resualt=%1u\n",result);
   }
    return result ;
}
