#include<iostream>
#include<cstdio>
using namespace std;
const int N=350;



int main()
{
    int m[N];
    int n;
    int a=0,b=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        //scanf("%d%d%d",&m[3*i+1],&m[3*i+2],&m[3*i+3]);
        cin>>m[3*i+1]>>m[3*i+2]>>m[3*i+3];
    }
    
    for(int i=0;i<n;i++)
    {
        a=a+m[3*i+1];
        b=b+m[3*i+2];
        c=c+m[3*i+3];
        

    }
    if(a==0&&b==0&&c==0)
    printf("YES");
    else
    printf("NO");
    system("pause");
    return 0;

    


}