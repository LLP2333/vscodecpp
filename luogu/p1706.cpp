#include<iostream>
#include<cstdio>
using namespace  std;

int a[10];//打印序列
bool b[10];



void dfs(int x,int n)//x表示已经使用的数的个数
{
  if(x==n)
  {
      for(int i=0;i<n;i++)
      {
          printf("%5d",a[i]);
      }
      cout<<endl;
  }else
  {
      for(int i=1;i<=n;i++)
      {
          if(b[i]==false)
          {
              a[x]=i;
             // x++;
              b[i]=true;
              dfs(x+1,n);
              b[i]=false;
          }
      }
  }



}

int main()
{

    int n;
    cin>>n;
    dfs(0,n);


system("pause");
return 0;

}