//最长连续不重复子序列
#include<iostream>
#include<cstdio>
using namespace std;
const int N=1e5+10;
int a[N],b[N];



int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int i,j;
    for( i=1;i<=n;)
    {
       for(j=i;j<=n;j++)
       {
           b[a[i]]++;
           while (b[a[j]]>1)
           {
              
              b[a[i]]--;
              i++; 
           }
           
       }
    }

    
    
}

# include <iostream>
using namespace std;

const int N = 100010;
int a[N], s[N];

int main()
{
    int n, r = 0;
    cin >> n;

    for (int i = 0, j = 0; i < n; ++ i)
    {
        cin >> a[i];
        ++ s[a[i]];
        while (s[a[i]] > 1) -- s[a[j++]]; // 先减次数后右移
        r = max(r, i - j + 1) ;
    }
    cout << r;

    return 0;
}