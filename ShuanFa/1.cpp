#include<iostream>
using namespace std;
#define MAXSIZE 100

typedef struct 
{
   int *base;
   int  *top;
  int stactsize;
}SqStack;

int InitStack(SqStack &s)
{
    s.base=new  int[MAXSIZE];
    if(!s.base)
    exit(-2);
    s.top=s.base;
    s.stactsize=MAXSIZE;
    return 1;
}

int Push(SqStack &s,int e)
{
    if (s.top-s.base==s.stactsize)
    return 0;
    *s.top=e;
    s.top++;
    return 1;

}

int input(SqStack &s)
{
 int t;
cout<<"������һ��������������-1�˳�"<<endl;
while(t>0){
    cin>>t;
    Push(s,t);

}
return 1;

}

int Pop(SqStack &s ,int &e)
{
    if(s.top==s.base)
    return 0;//����
    e=*s.top;
    s.top--;
    return 1;//�����˳�
}//��ջ
int Output(SqStack &s)
{
    if(*s.top==*s.base)
    return 0;
    cout<<s.top<<endl;
    return 1;
}//���ջ��Ԫ��

int Length(SqStack &s)
{
    cout<<"ջ�ĳ���"<<s.top-s.base<<endl;
    return 1;
}

int main()
{
    SqStack s;
    InitStack(s);
    input(s);
    int n;
    cin>>n;

    switch (n)
    {
    case 0:
    int e;
        Push(s, e);
        break;
    
    default:
        break;
    }

}
