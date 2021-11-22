#include<iostream>
using namespace std;
const int N=1e5+10;
int a[N];
int b[N];

int main()
{
    int n;
    
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        b[i]=a[i]-a[i-1];
    }
    for(int i=1;i<=n;i++)
    cout<<b[i]<<' ';
    system("pause");
    return 0;

}