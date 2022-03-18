#include<iostream>
#include<cstdio>
using namespace std;
 int a[1000][1000];


int main()
{
    int n,m;
    char t;
    int x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>t;
        if(t=='I')
        {
            cin>>x>>y;
            a[x][0]++;
            a[x][a[x][0]]=y;
            
        }
        if(t=='Q')
        {
            cin>>x;
            if(a[x][0]==0)
            {
                cout<<"-1"<<endl;
            }
            else
            {

               for(int i=a[x][0];i>=1;i--)
            {
                cout<<a[x][i]<<" ";
            }
            cout<<endl;

            }
            
          
         }
          // cout<<"time"<<endl;
    }
    system("pause");
    return 0;


}