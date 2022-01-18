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
void InitList_L(LinkList &L) //创建单链表,并初始化
{
    L = new LNode;
    L->next = nullptr;
}
void input(LinkList &L) //依次往单链表L里输入数据
{

    LNode *p, *r;
    r = L;
    char filename[20] = {0};
    cout << "请输入非递减单链表" << st << "的数据文件名称（文件名+“.txt”，如List" << st << ".txt）：" << endl;
    ++st;
    gets(filename);
    fstream file;
    file.open(filename);
    if (!file) {
        cout << "未找到相关文件，无法打开！" << endl;
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
void output(LinkList L) //依次输出单链表里的每个元素
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

    InitList_L(La); //La表的创建
    input(La); //依次往单链表La里输入数据

    InitList_L(Lb); //Lb表的创建
    input(Lb); //依次往单链表La里输入数据

    InitList_L(Lc);
    MergeList(La, Lb, Lc); //将单链表La和Lb进行合并


    cout << "非递减单链表A，B合并后的非递减单链表C为：\n"; //输出合并后的单链表Lc
    output(Lc);
    cout << endl;
    return 0;
}