#include<iostream>
#include<vector>
using namespace std;
void sum(vector<int>& a,vector<int>& b,vector<int>& c)
{
    
    
    int t=0;
    for(int i=0;i<a.size() || t;i++)
    {

        if(i<a.size()) t+=a[i];
        if(i<b.size()) t+=b[i];
        c.push_back(t%10);
        t/=10;
    }

}
int main()
{
    string m,n;
    vector<int> a,b,c;
    vector<int> result;
    cin>>m>>n;
    for(int i=m.size()-1;i>=0;i--) a.push_back(m[i]-'0');
    for(int i=n.size()-1;i>=0;i--) b.push_back(n[i]-'0');
    if(a.size()>=b.size())
    sum(a,b,c);
    else
    sum(b,a,c);
    for(int i=c.size()-1;i>=0;i--) cout<<c[i];
    system("pause");
    return 0;
}
//100;