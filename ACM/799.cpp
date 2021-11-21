//最长连续不重复子序列
#include<iostream>
#include<cstdio>
using namespace std;
const int N=1e5+10;
int a[N],b[N];

int check(int* i,int* j)
{
    j=a;
    i=j;
    b[*i]++;
    if (b[*i]>1)
    {
        j++;
    }
    
}


int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
}