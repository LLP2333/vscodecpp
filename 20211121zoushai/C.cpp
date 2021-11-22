#include<iostream>
using namespace std;
const int N=1010;
int a[N][N];

void nask(int x1,int y1,int x2,int y2)
{
    for(int i=x1;i<=x2;i++)
    {
        for(int j=y1;j<=y2;j++)
        a[i][j]++;
    }
}



int main()
{
    int n,m;
    cin>>n>>m;
    int x1,y1,x2,y2;
    for(int i=1;i<=m;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        nask(x1,y1,x2,y2);

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
    {
        cout<<a[i][j]<<' ';
    }
    cout<<"\n";

    }
    system("pause");
    return 0;
    
}