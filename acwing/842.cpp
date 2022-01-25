#include<iostream>
using namespace std;
int a[8],b[8];


void dfs()
{
    for(int i=1;i<=7;i++)
    {
        if(b[i]!=-1)
        {
           cout<<a[i]<<' ';
           b[i]=-1;
        }
         dfs();
       

    }
    for(int i=1;i<=7;i++)
    {
        
           
        
    }
}

int main()
{

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        a[i]=i;
    }

    
    dfs();
    system("pause");
    return 0;

}