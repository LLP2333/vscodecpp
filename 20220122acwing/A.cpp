#include<iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int t=0;
    for(int i=0;i<a.size();i++)
    {
       if(a[i]>=97&&a[i]<=122)
       {
           a[i]=a[i]-32;
       }
       if(b[i]>=97&&b[i]<=122)
       {
           b[i]=b[i]-32;
       }
        
    }
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>b[i])
        {
            t=1;
            break;
        }
        if(a[i]<b[i])
        {
          t=-1;
          break;
        }
    }
    cout<<t;
    system("pause");
    return 0;
}