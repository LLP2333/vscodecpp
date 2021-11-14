#include<iostream>
using namespace std;
//���Ӷ���
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
 }//��ʼ��

 int Enqueue(LinkQueue &Q,int e)
 {
    QueuePtr q;
    q=new QNode;//�¼ӵ�
    q->data=e;
    q->next=nullptr;
    Q.rear->next=q;
    Q.rear=q;
    //delete q;
    return 1;
 }//���

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
 }//����

 int GetHead(LinkQueue &Q)
 {
if(Q.front!=Q.rear)
return Q.front->next->data;
else 
return 0;
 //return 1;��ע����
 }//�������Ӷ�ͷԪ��
 
  int Input(LinkQueue &Q)
  {
      cout<<"����������:(����-1�˳�)"<<endl;
      int t=0;
      while (true)
      {
          cin>>t;
          if (t==-1)
          break;
        Enqueue(Q,t);
      }
      return 1;
      
      
  }//��������

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
    cout<<"1.��ʼ��һ����ͷ���Ŀն���"<<endl;
    cout<<"2.����һ���ǿ�������"<<endl;
    cout<<"3.��һ����x�嵽��β��x�ڳ�������ʱ������룩"<<endl;
    cout<<"4.ɾ����ͷԪ�أ�����ɾ�����������ɾ��Ԫ�ص�ֵ��"<<endl;
    cout<<"5.�ж������Ƿ�Ϊ�գ������������ͷԪ�أ�"<<endl;
    cout<<"6.�������������Ԫ�ء�"<<endl;
    cout<<"����-1�˳�����"<<endl;
    int n=0;
    int t;
    while (n!=-1)
    {
        cout<<"���������ѡ��:";
        cin>>n;
        switch(n)
        {
            case 1:
            {
                t=InitQueue(Q);
                if(t==1)
                cout<<"��ʼ���ɹ�"<<endl;
                else
                {
                    cout<<"��ʼ��ʧ��"<<endl;
                }
                break;
            }
            case 2:
            {
               t= Input(Q);
               if(t==1)
                cout<<"�����ɹ�"<<endl;
                else
                {
                    cout<<"����ʧ��"<<endl;
                }
                break;
            }
            case 3:
            {
                int e;
                cout<<"������Ҫ�����Ԫ�أ�";
                cin>>e;
                t=Enqueue(Q,e);
             if(t==1)
                cout<<"����ɹ�"<<endl;
                else
                {
                    cout<<"����ʧ��"<<endl;
                }
                break;
            }
            case 4:
            {
             int e;
             DeQueue(Q,e);
             cout<<"�ɹ�ɾ����ͷԪ��"<<e<<endl;
             break;
            }
            case 5:
            {
                int t ;
              t=GetHead(Q);
              cout<<"��ͷԪ��Ϊ"<<t<<endl;
              break;
            }
            case 6:
            {
             Output(Q);
             break;
            }
            default :
            {
                cout<<"����������"<<endl;
            }
        }
    }
    
    return 0;
    
}



