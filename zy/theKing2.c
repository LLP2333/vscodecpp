/*��������ŵP143*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define N  64
#define V  1.42e+8
int main(void)
{
  double k,sum;
  int i;
  sum=0;
  for(i=1;i<=N;i++)
  {
      k=pow(2,(i-1));
      sum=sum+k;
  }
  printf("������sum=%e\n",sum);
  printf("������Ҫ����%e������",sum/V);
  system("pause");
  return 0;
}