#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    int a,b,c;
    //long int i;
    for(n=100;n<1000;n++)
    {
    a=n/100;
    b=(n-100*a)/10;
    c=n-100*a-10*b;
    if(n==(a*a*a+b*b*b+c*c*c))
    cout<<n<<endl;
    }
    //system("pause");
    return 0;

}