//舞伴问题
#include<iostream>
#include<fstream>
#include<string>
#define MAXQSIZE 100//队列可能达到的最大长度
#define OK 1;
#define ERROR 0;
#define OVERFLOW -2
using namespace std;




typedef struct 
{
    char name[20];
    char sex;  //F表示女性，M表示男性
}Person;

typedef struct 
{
    Person *base;
    int front;
    int rear;
}SqQueue;


SqQueue Mdancers, Fdancers; //分别存放男士和女士入队者队列


int InitQueue(SqQueue &Q) {//构造一个空队列Q
	Q.base = new Person[MAXQSIZE]; //为队列分配一个最大容量为MAXSIZE的数组空间
	if (!Q.base)
		exit( OVERFLOW); //存储分配失败
	Q.front = Q.rear = 0; //头指针和尾指针置为零，队列为空
	return OK;
}

int EnQueue(SqQueue &Q, Person e) {//插入元素e为Q的新的队尾元素
	if ((Q.rear + 1) % MAXQSIZE == Q.front) //尾指针在循环意义上加1后等于头指针，表明队满
		return ERROR;
	Q.base[Q.rear] = e; //新元素插入队尾
	Q.rear = (Q.rear + 1) % MAXQSIZE; //队尾指针加1
	return OK;
}

int QueueEmpty(SqQueue &Q) {
	if(Q.rear==Q.front)
    return 1;
    else 
    return 0;
    
		
}

int DeQueue(SqQueue &Q, Person &e)//删除Q的队头元素，用e返回其值
{
	if (Q.front == Q.rear)
		return ERROR; //队空
	e = Q.base[Q.front]; //保存队头元素
	Q.front = (Q.front + 1) % MAXQSIZE; //队头指针加1
	return OK;
}

Person GetHead(SqQueue Q) {//返回Q的队头元素，不修改队头指针
	if (Q.front != Q.rear) //队列非空
		return Q.base[Q.front]; //返回队头元素的值，队头指针不变
		}


int main()
{
	Person dancer[MAXQSIZE];
		int i = 0;
		int f=0,m=0;//统计男生人数，女生人数
	fstream file;
	file.open("DancePartner.txt");
	if (!file) {
		cout << "错误！未找到文件！\n\n" << endl;
		exit(0);
	}
	while (!file.eof()) {
		file >> dancer[i].name >> dancer[i].sex;
		i++;
	}
	InitQueue(Mdancers); //男士队列初始化
	InitQueue(Fdancers); //女士队列初始化
	Person p;
	for (int k = 0; k < i+1; k++) //依次将跳舞者根据其性别入队
	{
		p = dancer[k];
		if (p.sex == 'F')
	    {
          EnQueue(Fdancers, p); //插入女队
		  f++;
		}
		else if(p.sex=='M')
		{
			EnQueue(Mdancers, p); //插入男队
			m++;
		}
			
	}
	cout<<"请输入舞会次数：";
	int times;
	cin>>times;
     int k=0;
	 cout << "女      男" << endl;
	 int w= f<m ? f:m;
	 int z=0;
	
    
	
	while (!QueueEmpty(Fdancers) && !QueueEmpty(Mdancers)&&(k<times*w)) {//依次输出男女舞伴的姓名
	    
		DeQueue(Fdancers, p); //女士出队
		EnQueue(Fdancers, p); //插入女队
		cout << p.name << "  "; //输出出队女士姓名
		DeQueue(Mdancers, p); //男士出队
		EnQueue(Mdancers, p); //插入男队
		cout << p.name << endl; //输出出队男士姓名
		
		k++;
		if(k%w==0)
		{
           z++;
          cout<<"以上是第"<<z<<"次舞曲名单"<<endl;
		}
		

	}
	
	
	system("pause");
	return 0;
}