//十进制转二进制
#include<iostream>
using namespace std;
int sum=0;
 
void change(const unsigned int val)
{
	for(int i = 32; i >= 0; i--)
	{
		if(val & (1 << i))
			sum++;
	}
}
 
int main()
{
   unsigned int n;
    cin>>n;
	change(n);
    cout<<sum;
    system("pause");
	return 0;
}