#include<iostream>
using namespace std;


const int N=1e5;
int value[N],nex[N],index,head;

void initializer()//初始化
{
    head=-1;
    index=0;
}

void add_head(int x)
{
    //新节点保存值
    value[index]=x;
    //新节点与原来头节点连的节点相连
    nex[index]=head;
    //更新头结点
    head=index;
    //更新index;
    index++;
}

void remove1(int k)
{
    nex[k]=nex[nex[k]];
}
//在k后一个节点上插入值为x的节点
void add(int k,int x)
{
    value[index]=x;
    nex[index]=nex[k];
    nex[k]=index;
    index++;
}


int main()
{
      initializer();
    int m;
    cin>>m;

    while(m--)
    {
        char op;
        int x;
        int k;
        cin>>op;
        switch(op)
        {
            case 'H':
            {
                cin>>x;
                add_head(x);
            }break;
            case 'D':
            {
                cin>>k;
                if(!k) head=nex[head];
                remove1(k-1);
            }break;
            default:
            {
                cin>>k>>x;
                add(k-1,x);
            }
        }
    }
    while(head!=-1)
    {
        cout<<value[head]<<" ";
        head=nex[head];
    }
    return 0;

}