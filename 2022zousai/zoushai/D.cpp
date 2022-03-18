#include<iostream>
using namespace std;

const int N=1e5+10;
int q[N];

void quick_sort(int l,int r)
{
    if (l>=r)
    return;
    int i=l-1;
    int j=r+1;
    int x=q[(l+r)>>1];
    while (i<j)
    {
      while (q[++i]<x);
      while (q[--j]>x);
      if(i<j) swap(q[i],q[j]);
    }
    
   
    quick_sort(l,j);
    quick_sort((j+1),r);
    

}

int main()
{ 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
     cin>>q[i];
    }
    quick_sort(0,(n-1));
    for(int i=0;i<n-1;i++)
    {
        cout<<q[i]<<' ';
    }
    cout<<q[n-1]<<endl;
    return 0;
    
}
//100