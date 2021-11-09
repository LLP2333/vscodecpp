#include<iostream>
using namespace std;
//链队定义
typedef struct QNode
{
    int data;
    struct QNode *next;
}QNode,*QueuePtr;

typedef struct 
{
    QueuePtr front;
    QueuePtr  rear;
}LinkQueue;
 
 int InitQueue(LinkQueue &Q)
 {
     Q.front=Q.rear=new QNode;
     Q.front->next=nullptr;
     return 1;
 }//初始化

 int Enqueue(LinkQueue &Q,int e)
 {
    QueuePtr q;
    q=new QNode;//新加的
    q->data=e;
    q->next=nullptr;
    Q.rear->next=q;
    Q.rear=q;
    //delete q;
    return 1;
 }//入队

 int DeQueue(LinkQueue &Q,int &e)
 {
     if(Q.front==Q.rear)
     return 0;
     QueuePtr p;
     p=Q.front->next;
     e=p->data;
     Q.front->next=p->next;
     if(Q.rear==p)
     Q.rear=Q.front;
     delete p;
     return 1;
 }//出队

 int GetHead(LinkQueue &Q)
 {
if(Q.front!=Q.rear)
return Q.front->next->data;
else 
return 0;
 //return 1;新注销的
 }//返回链队队头元素
 
  int Input(LinkQueue &Q)
  {
      cout<<"请输入数据:(输入-1退出)"<<endl;
      int t=0;
      while (true)
      {
          cin>>t;
          if (t==-1)
          break;
        Enqueue(Q,t);
      }
      return 1;
      
      
  }//创建链队

  int Output(LinkQueue &Q)
  {
      if(Q.front==Q.rear)
      return 0;
      QNode *p;
     
      for( p=Q.front->next;p!=Q.rear;)
    {
        cout<<p->data<<",";
        p=p->next;
    }
    cout<<p->data<<",";
    return 1;
  }

int main()
{
    LinkQueue Q;
    cout<<"1.初始化一个带头结点的空队列"<<endl;
    cout<<"2.创建一个非空链队列"<<endl;
    cout<<"3.将一个数x插到队尾（x在程序运行时随机输入）"<<endl;
    cout<<"4.删除队头元素，并在删除结束后输出删除元素的值；"<<endl;
    cout<<"5.判定队列是否为空，若不空输出队头元素；"<<endl;
    cout<<"6.输出队列中所有元素。"<<endl;
    cout<<"输入-1退出程序"<<endl;
    int n=0;
    int t;
    while (n!=-1)
    {
        cout<<"请输入你的选择:";
        cin>>n;
        switch(n)
        {
            case 1:
            {
                t=InitQueue(Q);
                if(t==1)
                cout<<"初始化成功"<<endl;
                else
                {
                    cout<<"初始化失败"<<endl;
                }
                break;
            }
            case 2:
            {
               t= Input(Q);
               if(t==1)
                cout<<"创建成功"<<endl;
                else
                {
                    cout<<"创建失败"<<endl;
                }
                break;
            }
            case 3:
            {
                int e;
                cout<<"请输入要插入的元素：";
                cin>>e;
                t=Enqueue(Q,e);
             if(t==1)
                cout<<"插入成功"<<endl;
                else
                {
                    cout<<"插入失败"<<endl;
                }
                break;
            }
            case 4:
            {
             int e;
             DeQueue(Q,e);
             cout<<"成功删除队头元素"<<e<<endl;
             break;
            }
            case 5:
            {
                int t ;
              t=GetHead(Q);
              cout<<"队头元素为"<<t<<endl;
              break;
            }
            case 6:
            {
             Output(Q);
             break;
            }
            default :
            {
                cout<<"请重新输入"<<endl;
            }
        }
    }
    
    return 0;
    
}



