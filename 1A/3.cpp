#include<iostream>
using namespace std;
int check(int x)
{
    if((x%4==0&&x%100!=0)||x%400==0)
    return 1;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    if(n==0)
    {
        cout <<2;
        //system("pause");
        return 0;
    }
    int sum=0;
    int k = 2;
    for(int i=1;i<=n;i++)
    {
        if(check(2020+i))
        sum+=366;
        else
        sum+=365;
    }
    if((k+sum%7)%7)
    cout << (k+sum%7)%7+1;
    else
    cout <<7;
    system("pause");
}
