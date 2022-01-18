#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main()
{
    long long int n;
    long long int a,b,min;
    //min=0;
    scanf("%ld",&n);
     scanf("%ld%ld",&a,&b);
      min=a*a+b*b;
    for(int i=2;i<=n;i++)
    {
      scanf("%ld%ld",&a,&b);
      if(a*a+b*b<min)
      {
          min=a*a+b*b;
      }
    }
    printf("%.6lf",sqrt((double)min));
   system("pause");
    return 0;
}