#include<iostream>
using namespace std;

const int N=1010;
int a[N][N],b[N][N];


int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
         cin>>a[i][j];
        }
    }
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
         b[i][j]=b[i-1][j]+b[i][j-1]+a[i][j]-b[i-1][j-1];
        }
    }
    while (q--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int sum;
        sum=b[x2][y2]-b[x1-1][y2]-b[x2][y1-1]+b[x1-1][y1-1];
        cout<<sum<<endl;
    }
    


}