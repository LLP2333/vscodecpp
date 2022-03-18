#include<iostream>
#include<vector>
#include<string>
using namespace std;

void jian(vector<int>& a,vector<int>& b,vector<int>& c)
{
    
    
    int t=0;
    for(int i=0;i<a.size() || t;i++)
    {

        if(i<a.size()) t+=a[i];
        if(i<b.size()) t-=b[i];
        c.push_back((t+10)/10);
        t/=10;
    }

}

int main()
{
    string M;
    vector<int> a,b;
    int n,t;
    long long int sum=0;
    cin>>M;
    cin>>n;
    for(int i=M.size()-1;i>=0;i--) a.push_back(M[i]-'0');
    for(int i=0;i<n;i++)
    {
     cin>>t;
     sum=sum+t;
    }
    string N=to_string(sum);
    for(int i=N.size()-1;i>=0;i--) b.push_back(N[i]-'0');


    
}