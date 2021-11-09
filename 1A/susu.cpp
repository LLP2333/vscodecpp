#include<iostream>
#include<cstdio>
using namespace std;


int isSusu(int k)
{
    int j;
    for ( j=2; j<k; j++ )    
    {
        if(k%j==0)    
        {
             return 0;
        }
        }
    return 1;   
}

int main()
{
     int n,i,j;
    int sum=0;
    int x,y;
    int t;
    

    cin>>x>>y;
    if(x>y)
    {
        n=x;
        x=y;
        y=n;
    }
    for(i=x;i<=y;i++)
    {   
        if(i==1)
    {
        continue;
    }else
    {
      t=isSusu(i);
        if(t==1)
        sum++;
    }
        
    }


    
    
    cout<<sum<<endl;
   //system("pause");
    return 0;
}