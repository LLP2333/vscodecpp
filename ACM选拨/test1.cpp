//������������ϰ��ջ ע������ջû��ͷ���
#include<iostream>
#include<fstream>
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
//��ջ
int Pop(LinkStack &s,int &e)
{
    LinkStack p;
  if(s==nullptr)
  return 0;
  e=s->data;
  p=s;
  s=s->next;
  delete p;
  return 1;
}
//ȡջ��Ԫ��
int GetTop(LinkStack s)
{
    if(s!=nullptr)
    {
        return s->data;
    }
}
//��ȡ����
int Input(LinkStack &s)
{
    char filename[20] = {0};
    cout<<"������Ҫ������ļ���:";
    gets(filename);
    fstream file;
    file.open(filename);
    if(!file)
    cout<<"δ�ҵ�����ļ�"<<endl;

    return 1;
}

