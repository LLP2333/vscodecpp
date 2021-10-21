#include<iostream>
using namespace std;
void swap(float* m, float* n)
{
	float* t;
	t = m;
	m = n;
	n = t;
}
void mian()
{
	float a, b, * p1, * p2;
	cin >> a >> b;
	p1 = &a;
	p2 = &b;
	swap(p1, p2);
	cout<<a<<endl<<b<<endl;

}