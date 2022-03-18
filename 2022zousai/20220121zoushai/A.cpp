#include<iostream>
#include<cstdio>
using namespace std;

const int N=1e6+10;
int a[N],b[N],head,si;
int sum[N],t;


void choose(int n)
{
  switch (n)
  {
  case 1:
      {
          
          cin>>a[si];
          
          b[si]=head;
          head=si;
          si++;
          break;

      }
    case 2:
    {
       int x=a[si];
        int i;
        for( i=(b[si]);i>0;i=(b[i]))
        {
            if(x>a[i])
            x=a[i];
        }
       sum[t]=x;
       t++;
        break;
    }
    case 3:
    {
        int x=a[si];
        int i;
        for( i=(b[si]);i>-1;i=(b[i]))
        {
            if(x>a[i])
            x=a[i];

        }
        b[i]=b[b[i]];

     break;

    }


  }
      
  
 



}

int main()
{
    head=-1;
    b[0]=-1;
  int m,x;
  scanf("%d",&m);
  for(int i=1;i<=m;i++)
  {
      scanf("%d",&x);
      choose(x);

  }
  for(int i=0;i<t;i++)
  {
      cout<<sum[t]<<endl;
  }
  system("pause");
  return 0;
  


}