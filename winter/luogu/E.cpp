#include<iostream>
#include<cstdio>
using namespace std;
const int N=2e5+10;
int a[N];
int k;

void choose(int m,int &max)
{
    switch (m)
    {

    case 0:
    {
        scanf("%d",&a[k]);
        if(a[k]>max)
        {
            max=a[k];
        }
       // cout<<max<<"mmmm"<<endl;
        k++;
       // return max;
        break;
    }
    case 1:
    {
      if(max>a[k-1])
      {
          k--;
      }
      else
      {
          max=0;
          for(int i=0;i<k-1;i++)
          {
              if(a[i]>max)
              max=a[i];
          }
          k--;
          
         
      }
     // cout<<max<<"mmmm"<<endl;
     //  return max;
          break;




    }
    case 2:
    {
        printf("%d\n",max);
    }




    }


}

int main()
{

    int n;
    int m;//选择
    int max=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&m);
        choose(m,max);
        
    }
    system("pause");
    return 0;

}