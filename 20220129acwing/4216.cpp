#include<iostream>
using namespace std;
const int N=100+5;
int w[N][N];//二维数值模拟邻接表
int via[N];




void dfs(int i,int j,int y,int max,int mark)
{
      if(i==max&&j==max&&y==max)
      {
        cout<<"YES";
      }
      for(;i<=max;i++)
      {
          for(;j<=max;j++)
          {
              if(w[i][j]==1)
              {
                  y++;
                  w[i][j]=-1;
                  w[j][i]=-1;
                  dfs(j,1,y,max,mark);
                  w[i][j]=1;
                  w[j][i]=1;

              }

          }
      }


}



int main()
{

    //读入数据
  int a,b;
  int max=0;//最大邻接表矩阵
  int sum=0;//自环个数
  int y=0;//节点个数
  int mark=1;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        w[a][b]=1;
        w[b][a]=1;
        max=(a>b)?a:b;
        y++;
    }
    for(int i=1;i<=max;i++)
    {
        if(w[i][i]==1)
        {
            sum++;
        }
    }
    if(sum>1)
    {
        cout<<"NO";
    }
    else{
        dfs(1,1,y,max,mark);
    }

    system("pause");
    return 0;


}