#include<bits/stdc++.h>
using namespace std;
int n,f[100010];


struct node{
	int num;
	int id;
}e;

deque <node> q;

int main()
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		while (!q.empty()&&q.back().num<a) f[q.back().id]=i,q.pop_back();
		//找比它小的数，成为这些数的仰望对象 
		e.num=a; e.id=i;
		q.push_back(e); //入队 
	}
	for (int i=1;i<=n;i++) printf("%d\n",f[i]);
	return 0;
}
