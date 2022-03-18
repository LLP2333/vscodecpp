#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int x,y;
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x>0)
        {
            a++;
        }
        else
        {
            a--;
        }
    }

    if(abs(a)==n-2||abs(a)==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    system("pause");
    return 0;
}