#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int> m;


int main()
{

    cin>>n;
    int t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        m.push_back(t);
    }
    vector<int>::iterator itBegin=m.begin();//指向容器开头
    vector<int>::iterator itEnd=m.end();//指向容器末尾最后一个元素的下一个位置
     int max=0;
     int x=0,y=0;

   int f=0,g=0;
   while (itBegin!=itEnd)
   { 
       x=x+*itBegin;
       
       while (y<=x)
       {
           itEnd--;
           y=y+*itEnd;
           
       }
       itBegin++;
       if(x==y)
       {
           max=x;
       }
       
       

   }

   cout<<max;
   system("pause");
   return 0;


   



}