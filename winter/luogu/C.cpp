#include<iostream>
#include<cstdio>
using namespace std;
const int N=1e5;
int a[N];

int main()
{
  int n,m;
  scanf("%d%d",&n,&m);
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  int sum=0;
  int temp=0;
  while(m--)
  {



for(int i=0;i<=(n-m);i++)
  {
      for(int j=0;j<m;j++)
      {
          temp=temp+a[j+i];
          
         
      }
        if(temp>sum)
      {
          sum=temp;
          
      }
     
      temp=0;
  }


  }
  
  printf("%d",sum);
  //system("pause");
  return 0;

}