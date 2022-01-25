#include<iostream>
#include<cstdio>
using namespace std;
const int N=1e6+10;
int a[N],Asize;
int b[N],Bsize;


int main()
{
    int x=0,y=0;
    char t;
    while ( scanf("%c",&t)!=EOF&&(x>=y))
    {
        if (t=='(')
        {
             a[++Asize]=t;
             x++;
        }
        else if(t==')')
        {
            a[++Asize]=t;
            y++;
        }
        else if(t=='*'||t=='/'||t=='+'||t=='-')
        {
            a[++Asize]=t;
        }

        if(t>='0'&&t<='9')
        {
            b[++Bsize]=t;
        }
       
        if(x>0&&y>0)
        {
            x--;
            y--;
        }
    }
    if(x==0&&y==0)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
    system("pause");
    return 0;
    
}