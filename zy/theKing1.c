#include<stdio.h>
#include<stdlib.h>
#define N  64
#define V  1.42e+8
int main(void)
{
    int k,n,sum;
    float end;//���ս���ж�������
    sum=0;
    k=0;
    for(n=1;n<=N;n++)
    {  
        if(n=1)
      {
        k=1;
      } 
      else
      {
        k=2*k;
      }
      sum=sum+k;
        
    }
    end=((float)sum)/V;
    printf("һ��������%f������",end);
    system("pause");

}