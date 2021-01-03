/*国王的许诺P143*/
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
    printf("麦子数sum=%e\n",sum);
    printf("国王一共需要麦子%e立方米\n",sum/V);
    system("pause");
    return 0;

}