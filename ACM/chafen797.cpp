#include<iostream>
using namespace std;

const int N=1e5+10;
int a[N],d[N];

void insert(int l,int r,int c)
{
    d[l]+=c;
    d[r+1]-=c;
}

int main()
{
    int n,m;
    int l,r,c;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        insert(i,i,a[i]);
    }
    for(int i=1;i<=m;i++)
    {
     cin>>l>>r>>c;
     insert(l,r,c);
    }
    for(int i=1;i<=n;i++)
    d[i]+=d[i-1];
    for(int i=1;i<=n;i++)
    cout<<d[i]<<' ';

}