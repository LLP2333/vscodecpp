#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
   unsigned  long long int n;
    float m;
    cin>>n>>m;
    //cout<<n*(1.0-m);
    printf("%lld\n",n);
    printf("%lld",(unsigned long long int)n*(1.0-m));
    system("pause");
    return 0;
}