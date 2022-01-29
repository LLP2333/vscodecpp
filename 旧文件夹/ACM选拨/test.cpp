#include<iostream>
using namespace std;

void t(int m[],int n);

int main()
{
  int n;
  cin>>n;
  int m[n];
  int k,q;
  for(k=0;k<n;k++)
  {
      cin>>q;
      m[k]=q;
  }
  t(m,n);
  for(k=0;k<n;k++)
  {
      cout<<m[k]<<" ";
  }
  
  
}
void t(int m[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;i++)
    {
        if(m[j]<=m[i])
        {
            temp=m[j];
            m[j]=m[i];
            m[i]=temp;
        }
    }
}