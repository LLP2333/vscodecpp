#include<iostream>
using namespace std;


int main()
{
  long int a,b,c;
  long  int max,min;
  cin>>a>>b>>c;
  max=a>b ?a:b;
  max=max>c ? max:c;
  min=a<b ?a:b;
  min=min<c ?min:c;
  int i=0;
  int w=1000000;
while(w--)
{
  for(i=2;i<=9;i++)
  {
      if(max%i==0&&min%i==0)
      {
       max=max/i;
       min=min/i;
      }
      
      //cout<<(min/i)<<'/'<<(max/i);
     
  }
}
  
      cout<<min<<'/'<<max;
  system("pause");
  return 0;

  
}
//80
