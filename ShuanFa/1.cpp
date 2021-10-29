#include<iostream>
using namespace std;
#define MAXSIZE 100

typedef struct SqStack
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
   // s.stactsize++;
    return 1;

}//��ջ

int Input(SqStack &s)
{
 int t;
cout<<"������һ��������������-1�˳�"<<endl;
do{
    cin>>t;
    if (t==-1)
    break;
    Push(s,t);

}while(t>0);
return 1;

}

int Pop(SqStack &s )
{
    int e;
    if(s.top==s.base)
    return 0;//����
    e=*s.top;
    cout<<e<<"�ѱ�����"<<endl;
    s.top--;
    return 1;//�����˳�
}//��ջ
int Top(SqStack &s)
{
    if(*s.top==*s.base)
    return 0;
    s.top--;
    //s.stactsize--;
    cout<<"ջ������Ϊ"<<*s.top<<endl;
    return 1;
}//���ջ��Ԫ��

int Length(SqStack &s)
{
    cout<<"ջ�ĳ���"<<s.top-s.base<<endl;
    return 1;
}

int Output(SqStack &s)
{
   if(s.base==s.top)
   return 0;
   while (s.top!=s.base)
   {
     
      cout<<*s.base<<",";
      s.base++;
   }
   cout<<endl;

   return 1;
   
}

int main()
{
    SqStack s;
    InitStack(s);
    
    int n;
    int k;
  
    cout<<"1.����ջ"<<endl;
    cout<<"2.���뵽ջ��"<<endl;
    cout<<"3.����ջ��Ԫ��,�����ջ����ֵ"<<endl;
    cout<<"4.���ջ����ֵ"<<endl;
    cout<<"5.���ջ�ĳ���"<<endl;
    cout<<"6.���ջ����ջ�׵�����Ԫ��"<<endl;
     n=1;
    while (n!=0)
    {

    cout<<"���������ѡ��:";
    cin>>n;
    cout<<"ѡ��ɹ�"<<endl;

     switch (n)
    {
    case 1:
    {
        Input(s);
        cout<<"����ɹ�"<<endl;
        break;
    }
    case 2:
    {
        int e;
      cout<<"������Ҫ���������:";
      cin>>e;
      k=Push(s,e);
      if(k==1)
      cout<<"����ɹ�"<<endl;
      else
      cout<<"Error"<<endl;
      break;
    }
    case 3:
    {

    
      k=Pop(s);
      if(k==0)
      cout<<"Error!"<<endl;
      break;

    }
    case 4 :
    {
      k=Top(s);
      if(k==0)
      cout<<"Error"<<endl;
      break;
    }
    case 5:
    {
        Length(s);
        break;
    }
    case 6:
    {
       k=Output(s);
       if(k==0)
       cout<<"Error"<<endl;
       break;
    }
    
    
    default:
        break;
    }

}

}
