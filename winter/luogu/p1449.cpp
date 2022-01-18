#include <string>//string
#include <iostream> 
#include <stack> //栈的头文件 
using namespace std;
char g[10000];
int main()
{
    
    cin>>g;
    int a=0; 
    stack <int> s;
    bool flag=false;
    for(int i=0;;i++)
    {
        if(g[i]=='@')break;
        
        if(g[i]<'0' || g[i]>'9')
        {
            if(g[i]=='.')//如果a>0 
               s.push(a);
            else
            {
               if(g[i]=='*')
               {
                   int stop=s.top();
                   s.pop();
                   stop=stop*s.top();
                   s.pop();
                   s.push(stop);
               }
               if(g[i]=='/')
               {
                   int stop=s.top();
                   s.pop();
                   stop=s.top()/stop;
                   s.pop();
                   s.push(stop);
               }
               if(g[i]=='-')
               {
                   int stop=s.top();
                   s.pop();
                   stop=s.top()-stop;
                   s.pop();
                   s.push(stop);
               }
               if(g[i]=='+')
               {
                   int stop=s.top();
                   s.pop();
                   stop=stop+s.top();
                   s.pop();
                   s.push(stop);
               }    
            }
               
            a=0;
        }
        else
        {
                a=a*10;
                a=a+g[i]-'0';
        }
    }
    if(s.empty())s.push(a);
    cout<<s.top();

    system("pause");
    return 0;
}