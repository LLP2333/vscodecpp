#include<iostream>
#include<cstdio>
using namespace std;

unsigned long Fact(unsigned int n)
{
    unsigned int i;
    unsigned long result=1;
    for(i=2;i<=n;i++)
    result *=i;
    return result;
}
int Count(int a){
    int a,b;
	 b=a-a/2-a%2+1;
    int k;
    k=a/2;
    int sum=0,i;
    int t;//ÁÙÊ±µÄ
    for(i=0;i<=k;i++)
    {
     t=Fact(a-i)/(Fact(i)*Fact(a-i-i));
     sum=sum+t;
    }
}
int main()
{
 int a, b;
    while(cin>>a)
    {

   
    cout<<Count(a)<<endl;
  
    }

    return 0;
    
}
