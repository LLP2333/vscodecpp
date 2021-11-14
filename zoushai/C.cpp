#include<iostream>
#include<vector>
using namespace std;

const int N=1001;



int main()
{
    int n,m,w=0;
    cin>>n>>m;
    int sum[1001];
    int a[N],b[N];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          if(a[i]==b[j])
          {
            sum[w]=a[i];
            w++;
          }
         
        }
    }
    for(int i=0;i<w;i++)
    {
        cout<<sum[i]<<' ';
    }
    
 system("pause");
 return 0;


}
//60