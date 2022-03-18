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
    int x,y;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        x=f(x);
        y=f(y);
        if(x!=y)
        {
            a[x]=y;
        }
        
    }
    
        x=f(8);
        y=f(n);
            if(x==y)
            cout<<"Success"<<endl;
            else
            cout<<"Fail"<<endl;
        

    
    system("pause");
    return 0;

}