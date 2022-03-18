#include<iostream>
#include<cstdio>

using  namespace std;
const int N=1e6+10;
unsigned  int h[N],siz;



void  down(int u)
{
    int t=u;
    if(u*2<=siz&&h[u*2]<h[u]) t=u*2;
    if((u*2+1)<=siz&&h[u*2+1]<h[u]) t=u*2+1;
    if(t!=u)
    {
        swap(h[t],h[u]);
        down(t);
    }
}
void  up(int u)
{
    while(u/2&&h[u/2]>h[u])
    {
        swap(h[u],h[u/2]);
        u=u/2;

    }
}

void choose(int x)
{
    switch (x)
    {
    case  1:
        {
            int t;
            scanf("%d",&t);
            siz++;
            h[siz]=t;
          up(siz);
            break;
        }
    case 2 :
    {
       
       printf("%d\n",h[1]);
        break;

    }
    case 3:
    {
        h[1]=h[siz];
       
        siz--;
         down(1);
        break;

    }
    }


}



int main()
{
     int m,x=1;
     int cir=0;
     scanf("%d",&m);
     while(x==1)
     {   
         cin>>x;
         if(x==1)
         {
             cin>>h[++siz];
             cir++;
         }
     }
     for(int i=siz;i;i--)
     down(i);
     m=m-cir;
    while (m--)
    {
        
       
        choose(x);
         cin>>x;
    }
    system("pause");
    return 0;
    

}