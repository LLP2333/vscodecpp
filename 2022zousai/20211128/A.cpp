#include<iostream>
using namespace std;
const int N=1e5+10;

 struct me
{
long long int age;
int sum;
};

typedef struct 
{
     me *x;
    int lenth;

}hap;


void quick_sort(int l,int r,hap &L)
{
    int temp;
    if (l>=r)
    return;
    int i=l-1;
    int j=r+1;
    int x=L.x[(l+r)>>1].age;
    while (i<j)
    {
      while (L.x[++i].age<x);
      while (L.x[--j].age>x);
      if(i<j)
      {
        swap(L.x[i].age,L.x[j].age);
        swap(L.x[i].sum,L.x[j].sum);  
      }
    }
    
   
    quick_sort(l,j,L);
    quick_sort((j+1),r,L);
    

}





int main()
{
    int n;
    cin>>n;
    hap L;
    long long int age;
    L.x=new  me[N];
    L.lenth=0;
    //long long int age;
     
    for(int i=0;i<n;i++)
    {
        cin>>age;
      L.x[i].age=age;
      L.x[i].sum++;
        
        L.lenth++;
    }
     quick_sort(0,(n-1),L);
long long int temp;
int sum=1;
     for(int i=0;i<n;i++)
    {
        if(L.x[i].age==L.x[i+1].age)
        {
         sum++;
        }
        else
        {
         cout<<L.x[i].age<<' '<<sum<<endl;
         sum=1;
        }
        
    }
    system("pause");
    return 0;


}