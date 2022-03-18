#include<iostream>
using namespace std;
 long long int n;


void check(long long int n)
{
    long long int i,j;
    i=j=10;
    
        for(j=10;j<n;j++)
        {
           for(i=j;i<=n;i++)
           {
            if((i-j+1)*(3*i-j)==2*n)
            {
                cout<<i<<' '<<j<<endl;
            }
           }

        }
    
    

}


int main()
{
   
    cin>>n;

   
    check(n);
 
    system("pause");
    return 0;

}

