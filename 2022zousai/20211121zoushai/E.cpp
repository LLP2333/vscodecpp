
#include<iostream>
using namespace std;
int a[17];
 
void change(const unsigned int val)
{
	for(int i = 16; i >= 0; i--)
	{
		if(val & (1 << i))
		a[i]=1;
	}
}
 
int main()
{
    int x;
    cin>>x;
	change(x);
    for(int i=0;i<=7;i++)
    {
        if(a[i]!=a[16-i])
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";


	return 0;
}