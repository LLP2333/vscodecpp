#include<iostream>
#include<cmath>
using namespace  std;


const int n=1e5+10;
int a[n][3];
int num=0;
  int absnum=1e5;
  int i;
  int x,y;
   int www=absnum+1;//初始值
    int N;


void  T()
{

while(absnum<www)
    {
        www=absnum;
        for(int j=0;j<N;j++)
    {
        if(a[j][2]=-1&&absnum>abs(x*a[j][0]-y-a[j][1]))
        {
          absnum=abs(x*a[j][0]-y-a[j][1]);
          x=x*a[j][0];
          y=y+a[j][1];
          a[j][2]=0;
          num++;

        
        }
    }
    }
}


int main()
{
 
 cin>>N;

  for(int i=0;i<N;i++)
 {
     cin>>a[i][0]>>a[i][1];
     a[i][2]=-1;
 }
  
 x=1,y=0;

    cout<<num<<endl;
    cout<<absnum<<endl;
    for(int f=0;f<N;f++)
    {
        if(a[f][2]==0)
        cout<<f+1<<' ';
    }

    system("pause");
    return 0;



}