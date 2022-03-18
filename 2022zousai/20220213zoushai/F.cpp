#include<iostream>

using namespace std;
const int N=1e6+10;
int a[N];


int f(int w)
{
    if(w!=a[w])
    {
      a[w]=f(a[w]);
    }
    return  a[w];
}

int main()
{
    int  n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        a[i]=i;
    }
    int z,x,y;
    int w,q;
    for(int i=1;i<=m;i++)
    {
        cin>>z>>w>>q;
        x=f(w);
        y=f(q);
        if(z==1&&x!=y)
        {
            a[x]=y;
        }
        if(z==2)
        {
            if(x==y)
            cout<<"Y"<<endl;
            else
            cout<<"N"<<endl;
        }
    }

    
    system("pause");
    return 0;

}