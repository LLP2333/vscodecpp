#include<iostream>
using namespace std;
int main()
{
   /* int n;
    cin>>n;
    cout<<n+10022<<endl;
    */
    for(int i=0;i<=9;i++)
    {
        for(int j=2;j<=11;j++)
        {
          cout<<"1/"<<j+i<<"     ";
        }
        cout<<endl;//换行
    }
    system("pause");
    return 0;
}