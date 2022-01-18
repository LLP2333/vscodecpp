#include<iostream>
#include<cstdio>
using namespace std;
const int N=1e4+10;
int a[N];

int main()
{
    
    int n,m;
    scanf("%d%d",&n,&m);

    int count=0;
    int k=-1;
    while(count<(n-1))
    {
        int i=0;
        while(i<m)
        {
            k=(k+1)%n;
            if(a[k]==0)
            {
                i++;
                if(i==m)
                {
                    a[k]=-1;
                    count++;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            printf("%d\n",(i+1));
            break;
        }
    }
    system("pause");
    return 0;

}