//本程序用来练习链栈 注明：链栈没有头结点
#include<iostream>
using namespace std;
//链栈结构体
typedef struct StackNode
{
    int data;
    struct StackNode *next;
}StackNode,*LinkStack;

//链栈的初始化
int InitStack(LinkStack &s)
{
   s=nullptr;
   return 1;
}
//入栈
int  Push(LinkStack &s,int e)
{
    LinkStack p; 
    p=new StackNode;
    p->data=e;
    p->next=s;
    s=p;
    return 1;

}

