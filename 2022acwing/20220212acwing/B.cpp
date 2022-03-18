#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
	
    cin>>n;
	int a[n][2];
    int  x=0,y=0;
	for(int i=0;i<n;i++){	
		cin>>a[i][0]>>a[i][1];
		if(a[i][0]<0)			
		x++;				
		if(a[i][0]>0)
		y++;					
		
	}
	if(x<=1||y<=1)
	cout<<"Yes";
	else
	cout<<"No";


    return 0;


} 
