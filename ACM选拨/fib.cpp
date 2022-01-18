#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,i;
    int k;
    do
    {
      k=scanf("%d",n);
      i=(n/2)+(n%2)+1;
      cout<<i<<endl;

    } while (k);
    return 0;
    
}