#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main()
{
    int p;
    double y=2.0,x;
    cin>>p;
    double  a,b;
    for(int i=1;i<=49;i++)
    { 
        y=(2.0)*y;
        x=1.0/y;
       
      a=(log(1.0+x)/pow(x,(double)p));
      //cout<<a<<endl;
      
    }
     y=(2.0)*y;
        x=1.0/y;
       b=(log(1.0+x)/pow(x,(double)p));
       //cout<<b<<"嘤"<<endl;
       if(b-a>=0)
       cout<<b;
       else cout<<"infinity";
    system("pause");
    return 0;
    

}