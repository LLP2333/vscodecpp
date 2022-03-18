#include<iostream>
#include<fstream>
#include<string>
#define MAXQSIZE 100//���п��ܴﵽ����󳤶�
#define OK 1
#define ERROR 0
#define OVERFLOW -2
using namespace std;

typedef struct {
	char name[20]; //����
	char sex; //�Ա�'F'��ʾŮ�ԣ�'M'��ʾ����
} Person;

//- - - - - ���е�˳��洢�ṹ- - - - - 
typedef struct {
	Person *base; //����������Ԫ������ΪPerson
	int front; //ͷָ��
	int rear; //βָ��
} SqQueue;

SqQueue Mdancers, Fdancers; //�ֱ�����ʿ��Ůʿ����߶���

int InitQueue(SqQueue &Q) {//����һ���ն���Q
	Q.base = new Person[MAXQSIZE]; //Ϊ���з���һ���������ΪMAXSIZE������ռ�
	if (!Q.base)
		exit( OVERFLOW); //�洢����ʧ��
	Q.front = Q.rear = 0; //ͷָ���βָ����Ϊ�㣬����Ϊ��
	return OK;
}

int EnQueue(SqQueue &Q, Person e) {//����Ԫ��eΪQ���µĶ�βԪ��
	if ((Q.rear + 1) % MAXQSIZE == Q.front) //βָ����ѭ�������ϼ�1�����ͷָ�룬��������
		return ERROR;
	Q.base[Q.rear] = e; //��Ԫ�ز����β
	Q.rear = (Q.rear + 1) % MAXQSIZE; //��βָ���1
	return OK;
}

int QueueEmpty(SqQueue &Q) {
	if (Q.front == Q.rear) //�ӿ�
		return OK;
	else
		return ERROR;
}

int DeQueue(SqQueue &Q, Person &e)//ɾ��Q�Ķ�ͷԪ�أ���e������ֵ
{
	if (Q.front == Q.rear)
		return ERROR; //�ӿ�
	e = Q.base[Q.front]; //�����ͷԪ��
	Q.front = (Q.front + 1) % MAXQSIZE; //��ͷָ���1
	return OK;
}

Person GetHead(SqQueue Q) {//����Q�Ķ�ͷԪ�أ����޸Ķ�ͷָ��
	if (Q.front != Q.rear) //���зǿ�
		return Q.base[Q.front]; //���ض�ͷԪ�ص�ֵ����ͷָ�벻��
}
Person dancer[MAXQSIZE];
int main()
{
	Person p;
	int choose, flag = 0;	
	cout << "1.��ʼ������\n";
	cout << "2.��Ů���\n";
	cout << "3.���ǰ3֧�������������\n";
	cout << "4.�����ɵ���Ů��鲢����������������Ŷ�\n";
	cout << "0.�˳�\n\n";
	choose = -1;
	while (choose != 0) {
		cout << "��ѡ��:";
		cin >> choose;
		switch (choose) {
		case 1:
			if (InitQueue(Mdancers) && InitQueue(Fdancers)) {
				flag = 1;
				cout << "�ɹ�����Ů���н��г�ʼ��\n\n";
			} else
				cout << "��ʼ��ʧ��\n\n";
			break;
		case 2: 
		{
			int i = 0;
			fstream file;
			file.open("DancePartner.txt");
			if (!file) {
				cout << "����δ�ҵ��ļ���\n\n" << endl;
				exit( ERROR);
			}
			while (!file.eof()) {
				file >> dancer[i].name >> dancer[i].sex;
				i++;
			}
			int num=i;			
			for (int i = 0; i < num; i++) //���ν������߸������Ա����
			{
				p = dancer[i];
				if (p.sex == 'F')
					EnQueue(Fdancers, p); //����Ů��
				else
					EnQueue(Mdancers, p); //�����ж�
			}
			cout << "��Ů�����ӣ�" << endl; 
			break;
		} 
		case 3:
			{
				int j=0; 
				while (!QueueEmpty(Fdancers) && !QueueEmpty(Mdancers) && j<3) 
				{
					DeQueue(Fdancers, p); //Ůʿ����
					cout << p.name << "  "; //�������Ůʿ����
					DeQueue(Mdancers, p); //��ʿ����
					cout << p.name << endl; //���������ʿ����
					
					EnQueue(Fdancers, p); //����Ů��
					EnQueue(Mdancers, p); //�����ж�
					j++;		
			    }
			    break;
			}			
	    case 4:
	    	{
	    		int k=0; 
			    while (!QueueEmpty(Fdancers) && !QueueEmpty(Mdancers) && k<15 ) 
				{
					DeQueue(Fdancers, p); //Ůʿ����
					cout << p.name << "  "; //�������Ůʿ����					
					DeQueue(Mdancers, p); //��ʿ����
					cout << p.name << endl; //���������ʿ����
					
					EnQueue(Fdancers, p); //����Ů��
					EnQueue(Mdancers, p); //�����ж�
					k++;						
			    }
			}
	}
}

	return 0;
}


