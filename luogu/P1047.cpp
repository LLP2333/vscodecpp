#include<iostream>
using namespace std;

const int N=1e4+10;
int a[N];
 int main()
 {
     int l,m;
     cin>>l>>m;
     int u,v;
     for(int i=0;i<m;i++)
     {
         cin>>u>>v;
         for(int i=u;i<=v;i++)
         {
           a[i]++;
         }
     }
     int sum=0;
     int i=0;
     while (i<=l)
     {
         if(a[i]==0)
         sum++;
         i++;
     }
     cout<<sum;
     system("pause");
     return  0;
     

 }