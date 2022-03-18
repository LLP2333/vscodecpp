#include<iostream>
#include<cstdio>
using namespace std;


int main()
{
    int sum=0;
    int n;
    
    cin>>n;
    int k=n-2;
   // int temp=n;
    for(int i=2;i<n;i++)
    {
        int temp=n;
        while (temp>=i)
        {
            sum=sum+temp%i;
            temp=temp/i;
        }
       // cout<<sum<<endl;
        sum=sum+temp;
       // cout<<sum<<endl;
        
    }
    for(int i=2;i<(n-2);i++)
    {
        
            
            while (sum%i==0&&k%i==0)
            {
            sum=sum/i;
            k=k/i;
            }
            

        
    }
    cout<<sum<<"/"<<k<<endl;
    system("pause");
    return 0; 1
}