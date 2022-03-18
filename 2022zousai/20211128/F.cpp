#include<iostream>
using namespace std;

const int N=1e6+10;
int a[N],d[N];

void insert(int l,int r,int c)
{
    d[l]+=c;
    d[r+1]-=c;
}

int main()
{
    int n,p;
    int l,r,c;
    cin>>n>>p;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        insert(i,i,a[i]);
    }
    for(int i=1;i<=p;i++)
    {
     cin>>l>>r>>c;
     insert(l,r,c);
    }
    for(int i=1;i<=n;i++)
    d[i]+=d[i-1];
    int min=1e5;
    for(int i=1;i<=n;i++)
    {
      if(min>d[i])
        min=d[i];
    }
   cout<<min;
   system("pause");
   return 0;

}