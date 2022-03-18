#include<iostream>
#include<cstdio>
using namespace std;
const  int N=2e5+1;
int a[N];


void key(int n)
{
   
    int k=0;
    int sum=0;
    
        for(int j=1;j<n;j++)
        {
           for(int i=j;i<=n;i++)
           {
            sum+=a[i];
            
            k=max(k,sum);
            
           }
           sum=0;

        }
        cout<<k;
    
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    key(n);
    system("pause");
    return 0;

    
}
