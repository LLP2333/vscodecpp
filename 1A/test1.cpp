//������������ϰ��ջ ע������ջû��ͷ���
#include<iostream>
using namespace std;
//��ջ�ṹ��
typedef struct StackNode
{
    int data;
    struct StackNode *next;
}StackNode,*LinkStack;

//��ջ�ĳ�ʼ��
int InitStack(LinkStack &s)
{
   s=nullptr;
   return 1;
}
//��ջ
int  Push(LinkStack &s,int e)
{
    LinkStack p; 
    p=new StackNode;
    p->data=e;
    p->next=s;
    s=p;
    return 1;

}

