#include<iostream>
using namespace std;

const int N=1e5+10;
int q[N];

int quick_sort(int l,int r,int k)
{
    if (l>=r)
    return q[l];
    int i=l-1;
    int j=r+1;
    int x=q[(l+r)>>1];
    while (i<j)
    {
      while (q[++i]<x);
      while (q[--j]>x);
      if(i<j) swap(q[i],q[j]);
    }
    int res=j-l+1;
    
    if(k<=res)
    {
     quick_sort(l,j,k);
    }
    else
    {
        quick_sort(j+1,r,k-res);
    }

    
   
    //quick_sort(l,j);
    //quick_sort((j+1),r);
    

}

int main()
{ 
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
     cin>>q[i];
    }
   
    cout<< quick_sort(0,(n-1),k);
    
    return 0;
    
}