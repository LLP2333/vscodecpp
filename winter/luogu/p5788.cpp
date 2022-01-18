#include<cstdio>
#include<iostream>
#include<cstring>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<stack>

using namespace std;
const int maxn=3e6+5;
int n,a[maxn],ans[maxn];
stack<int> s;

int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		while(!s.empty()&&a[s.top()]<a[i]) ans[s.top()]=i,s.pop();
		s.push(i);
	}
	for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    system("pause");
    return 0;
}
