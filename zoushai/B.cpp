#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a[10001],n;
    int sum=0;
     int i,j;
    cin>>n;
   
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-1;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			swap(a[j],a[j+1]);
				sum++;
    		}
    	}
    }
	cout<<sum;
	return 0;
} 
//100