//�������
#include<iostream>
#include<fstream>
#include<string>
#define MAXQSIZE 100//���п��ܴﵽ����󳤶�
#define OK 1;
#define ERROR 0;
#define OVERFLOW -2
using namespace std;




typedef struct 
{
    char name[20];
    char sex;  //F��ʾŮ�ԣ�M��ʾ����
}Person;

typedef struct 
{
    Person *base;
    int front;
    int rear;
}SqQueue;


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
	if(Q.rear==Q.front)
    return 1;
    else 
    return 0;
    
		
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

void DancePartner(Person dancer[], Person &p) {//�ṹ����dancer�д���������Ů��num�������������
	
	
	cout << "The dancing partners are:" << endl;
	while (!QueueEmpty(Fdancers) && !QueueEmpty(Mdancers)) {//���������Ů��������
		DeQueue(Fdancers, p); //Ůʿ����
		EnQueue(Fdancers, p); //����Ů��
		cout << p.name << "  "; //�������Ůʿ����
		DeQueue(Mdancers, p); //��ʿ����
		EnQueue(Mdancers, p); //�����ж�
		cout << p.name << endl; //���������ʿ����
	}
	/*
	if (!QueueEmpty(Fdancers)) { //Ůʿ���зǿգ������ͷŮʿ������
		p = GetHead(Fdancers); //ȡŮʿ��ͷ
		cout << "The first man to get a partner is: " << endl;
		cout << p.name << endl;
	} else if (!QueueEmpty(Mdancers)) { //��ʿ���зǿգ������ͷ��ʿ������
		p = GetHead(Mdancers); //ȡ��ʿ��ͷ
		cout << "The first woman to get a partner is: " << p.name << endl;
	}
	*/
}


int main()
{
	Person dancer[MAXQSIZE];
		int i = 0;
	fstream file;
	file.open("DancePartner.txt");
	if (!file) {
		cout << "����δ�ҵ��ļ���\n\n" << endl;
		exit(0);
	}
	while (!file.eof()) {
		file >> dancer[i].name >> dancer[i].sex;
		i++;
	}
	InitQueue(Mdancers); //��ʿ���г�ʼ��
	InitQueue(Fdancers); //Ůʿ���г�ʼ��
	Person p;
	for (int k = 0; k < i+1; k++) //���ν������߸������Ա����
	{
		p = dancer[i];
		if (p.sex == 'F')
			EnQueue(Fdancers, p); //����Ů��
		else
			EnQueue(Mdancers, p); //�����ж�
	}
	cout<<"��������������";
	int n;
	cin>>n;

	while(n--)
	{
      DancePartner(dancer, p);
	}
	
	system("pause");
	return 0;
}