#include<iostream>
using namespace std;

int n,a,b;

int main()
{
    cin>>n>>a>>b;
    int x,y;
    x=n/a;
    y=n/b;

    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            if(a*i+b*j==n)
            {
                cout<<"YES";
                return 0;
            }
        }
    }


    cout<<"NO";
    return 0;





}