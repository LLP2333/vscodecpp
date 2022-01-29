//本程序用来练习链栈 注明：链栈没有头结点
#include<iostream>
#include<fstream>
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
//出栈
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
//取栈顶元素
int GetTop(LinkStack s)
{
    if(s!=nullptr)
    {
        return s->data;
    }
}
//读取函数
int Input(LinkStack &s)
{
    char filename[20] = {0};
    cout<<"请输入要读入的文件名:";
    gets(filename);
    fstream file;
    file.open(filename);
    if(!file)
    cout<<"未找到相关文件"<<endl;

    return 1;
}

