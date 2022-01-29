#include<iostream>
using namespace std;
int a[5];
int n;
void  nfs(int i)
{
    if(i==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<' ';
            cout<<endl;
        }
       
    }
     else{
            for(int j=i;j<n;j++)
            {
             swap(a[i],a[j]);
            }
        }
}


int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    nfs(n);
    system("pause");
    return 0;
}