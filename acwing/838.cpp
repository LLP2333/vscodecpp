//838. 堆排序
//堆其实就是完全二叉树
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

const int N=1e5+10;
int H[N],Hsize;

void down(int u)
{
    int t=u;//t保存的是三个节点最小值
    if(u*2<=Hsize&&H[u*2]<H[u])  t=u*2;
    if((u*2+1)<=Hsize&&H[u*2+1]<H[u])  t=u*2+1;
    if(t!=u)
    {

     swap(H[t],H[u]);
     down(t);//交换数值后继续递归


    }


}

int main()
{

    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&H[i]);
        Hsize++;
    }

    for(int i=n/2;i>0;i--)
    {
        down(i);
    }

    //输出  注根节点最小
    while (m--)
    {
       printf("%d",H[1]);
       H[1]=H[Hsize];
       Hsize--;
       down(1);
    }
    system("pause");
    return 0;
    

}