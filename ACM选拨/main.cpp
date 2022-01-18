#include<fstream>
#include<iostream>
#define ERROR 0
using namespace std;

char st = 'A';

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode,*LinkList;

void MergeList(LinkList &LA, LinkList &LB, LinkList &LC)
{
    LinkList pa;
    LinkList pb;
    LinkList pc;
    pa=LA->next;
    pb=LB->next;
    LC=LA;
    pc=LC;
    while(pa&&pb)
    {
        if((pa->data) <=(pb->data))
        {
            pc->next=pa;
            pc=pa;
            if(pa->data == pb->data)
                pb =  pb->next;
            pa=pa->next;
        }

        else if ((pa->data) >(pb->data))
        {
            pc->next=pb;
            pc=pb;
            pb=pb->next;

        }
    }
    pc->next=pa?pa:pb;
    delete LB;

}
void InitList_L(LinkList &L) //����������,����ʼ��
{
    L = new LNode;
    L->next = nullptr;
}
void input(LinkList &L) //������������L����������
{

    LNode *p, *r;
    r = L;
    char filename[20] = {0};
    cout << "������ǵݼ�������" << st << "�������ļ����ƣ��ļ���+��.txt������List" << st << ".txt����" << endl;
    ++st;
    gets(filename);
    fstream file;
    file.open(filename);
    if (!file) {
        cout << "δ�ҵ�����ļ����޷��򿪣�" << endl;
        exit(ERROR);
    }
    while (!file.eof()) {
        p = new LNode;
        file >> p->data;
        p->next = nullptr;
        r->next = p;
        r = p;
    }
    file.close();
}
void output(LinkList L) //����������������ÿ��Ԫ��
{
    LNode *p;
    p = L->next;
    while (p) {

        cout << p->data;
        cout << ",";
        p = p->next;
    }
}
int main() {
    LinkList La, Lb, Lc;

    InitList_L(La); //La��Ĵ���
    input(La); //������������La����������

    InitList_L(Lb); //Lb��Ĵ���
    input(Lb); //������������La����������

    InitList_L(Lc);
    MergeList(La, Lb, Lc); //��������La��Lb���кϲ�


    cout << "�ǵݼ�������A��B�ϲ���ķǵݼ�������CΪ��\n"; //����ϲ���ĵ�����Lc
    output(Lc);
    cout << endl;
    return 0;
}