#include<iostream>
#include<cstdio>
using namespace std;


int main()
{
    int x=0,y=0;
    char a;
    while (a!='@'&&(x>=y))
    {
        a=getchar();
        if(a=='(')
        x++;
        if(a==')')
        y++;
        if(x>0&&y>0)
        {
            x--;
            y--;
        }
        if(y>x)
        {

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