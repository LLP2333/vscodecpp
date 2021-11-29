#include<iostream>
#include<cstdio>
using namespace std;
long int a[8];

int year(int year)
{
  if(((year%4==0) && (year%100!=0)) || year%400==0){  
        return 1; 
  
    }else{  
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    long int sum=0;
    for(int i=1;i<=7;i++)
    {
        cout<<a[i]<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        sum+=365+year(1900+n-1);
    }
    //int i=0;
    for(int i=0;i<=sum;)
    {
      i=i+13;
      a[i%7]++;
    }
   /*
   for(int i=1;i<=i++)
    {
        cout<<a[i]<<endl;
    }
    */

    system("pause");
    return 0;
   
    

}