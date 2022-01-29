#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

typedef pair<int, int> PII;

const int N=110;
int g[N][N],d[N][N];//g[N][N]读入地图 d[N][N]记录每一点到起点的距离
PII q[N*N];
int n,m;

int bfs()
{
    int hh=0,tt=0;
    q[0]={0,0};
    memset(d,-1,sizeof d);
    d[0][0]=0;
    
    int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
    while (hh<=tt)
    {
        auto t=q[hh++];
        for(int i=0;i<4;i++)
        {
            int x=t.first+dx[i],y=t.second+dy[i];
            if(x>=0&&x<n&&y>=0&&y<m&&g[x][y]==0&&d[x][y]==-1)
            {
                   d[x][y]=d[t.first][t.second]+1;
                   q[++tt]={x,y};
            }
        }
    }

    return d[n-1][m-1];
    

}

int main()
{
    
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>g[i][j];
        }
    }
    cout<<bfs()<<endl;
    system("pause");
    return 0;
    
}