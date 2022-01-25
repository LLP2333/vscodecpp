#include<iostream>
using namespace std;
 unsigned int q[4];




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
    int n=0;
    char x;
    int f=4;
    int tri=1;
    for(int i=0;i<4;i++)
    {
        cin>>q[i];
    }
    quick_sort(0,f-1);
    for(int i=1;i<=3;i++)
    {
        cin>>x;
        if(x=='*')
        {
            n++;
        }
    }
    for(int i=0;i<4;i++)
    {
        if(n>=1&&q[i]==0)
        {
            tri=0;
        }
    }
    int w=0;
   // cout<<"wejduiew"<<n<<endl;
    for(int i=n;i>0;i--)
    {
        q[w]=q[w]*q[w+1];
        q[w+1]=-1;
        w++;
        quick_sort(0,f-1);
        
   
    }
    
    

    int sum=0;
    //quick_sort(0,3);
    

    for(int i=0;i<f;i++)
    {
        if(q[i]>=0)
        {
          sum=sum+q[i];
        }
      
    }
     for(int i=0;i<4;i++)
    {
        cout<<"ed"<<q[i]<<endl;
    }
    if(tri!=0)
    {
       cout<<sum;
    }
    else
    cout<<'0';
    
    system("pause");
    return 0;
    


    
}