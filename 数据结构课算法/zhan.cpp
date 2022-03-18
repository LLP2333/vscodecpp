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

}//进栈

int Input(SqStack &s)
{
 int t;
cout<<"请输入一个正整数，输入-1退出"<<endl;
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
    return 0;//错误
    e=*s.top;
    cout<<e<<"已被弹出"<<endl;
    s.top--;
    return 1;//正常退出
}//出栈
int Top(SqStack &s)
{
    if(*s.top==*s.base)
    return 0;
    s.top--;
    //s.stactsize--;
    cout<<"栈顶数据为"<<*s.top<<endl;
    return 1;
}//输出栈顶元素

int Length(SqStack &s)
{
    cout<<"栈的长度"<<s.top-s.base<<endl;
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
  
    cout<<"1.创建栈"<<endl;
    cout<<"2.插入到栈顶"<<endl;
    cout<<"3.弹出栈顶元素,并输出栈顶的值"<<endl;
    cout<<"4.输出栈顶的值"<<endl;
    cout<<"5.输出栈的长度"<<endl;
    cout<<"6.输出栈顶到栈底的所有元素"<<endl;
     n=1;
    while (n!=0)
    {

    cout<<"请输入你的选择:";
    cin>>n;
    cout<<"选择成功"<<endl;

     switch (n)
    {
    case 1:
    {
        Input(s);
        cout<<"建表成功"<<endl;
        break;
    }
    case 2:
    {
        int e;
      cout<<"请输入要插入的数字:";
      cin>>e;
      k=Push(s,e);
      if(k==1)
      cout<<"插入成功"<<endl;
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
