#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
  int a,n;
  float Sn=0;
  float t;
  int sum;
  int k;
  printf("Please input a and n\n");
  scanf("%d%d",&a,&n);
  
  
  for(k=1;k<=n;k++)
  {
    
     t=((pow(10,k)-1)*a)/9;
     //t=pow(10,k);
     //printf("t=%f\n",t);
     Sn=Sn+t;
  }
  sum=(int)Sn;
  printf("Sn=%d\n",sum);
  system("pause");
  return 0;




}