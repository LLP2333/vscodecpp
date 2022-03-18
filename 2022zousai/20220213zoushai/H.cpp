#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x=1;
    m=m-1;
    //倒着从1到2





    while (n||m)
    {
        if(x<2)
        {
            m--;
            x++;

        }
        else
        {
            if(x%2==0)
            {
                x=x/2;
                n--;
            }
            else
            {
                x++;
                x=x/2;
                n--;
                m--;
            }
        }
    }
    



}