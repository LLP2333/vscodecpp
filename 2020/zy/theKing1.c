/*��������ŵP143*/
#include<stdio.h>
#include<stdlib.h>
#define N  64
#define V  1.42e+8
int main(void)
{
    int n;
    double k,sum;
    sum=0;
    k=0;
    for(n=1;n<=N;n++)
    {  
        if(n<=2)
      {
        k=n;
      } 
      else 
      {
        k=2*k;
      }
      sum=sum+k;
        
    }
    printf("������sum=%e\n",sum);
    printf("����һ����Ҫ����%e������\n",sum/V);
    system("pause");
    return 0;

}