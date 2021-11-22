#include<iostream>
using namespace std;
const long long int N=5e4+1;
int a[N];


int check(int n)
{
    int i,j;
    i=j=1;
    int k=0;
    int sum=0;
    
        for(j=1;j<n;j++)
        {
           for(i=j;i<=n;i++)
           {
            sum=sum+a[i];
            if(sum%7==0)
            {
                k=max(k,i-j+1);
            }
           }

        }
        return k;
    
    

}


int main()
{
   long long  int n;
    cin>>n;
    //int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
   
    cout<<check(n);
     //cout<<"hh";
    system("pause");
    return 0;

}

