/*ѧ���ɼ�����ϵͳP226*/
#include<stdio.h>
#include<stdlib.h>
#define N  30
void ReadStudentScoreAndId(long num[],int score[],int n);//������ȡѧ�źͳɼ�
int Average(int score[],int n);//��������ɼ�ƽ��ֵ
void  DataSort(long num[],int score[],int n);
void  DataSortPlus(long num[],int score[],int n);
int  Search(long num[],long x,int n);



int main(void)
{
    printf("1.Input record\n");//¼��ÿ��ѧ����ѧ�źͿ��Գɼ�
    printf("2.Caculate total  and average  score  of   course\n");//����ɼ����ֺܷ�ƽ����
    printf("3.Sort  in descending  order  by  score\n");//���ɼ��ɸߵ����ų����α�
    printf("4.Sort  in   descending   order by number\n");//��ѧ����С�����ų��ɼ���
    printf("5.Search  by   number\n");//��ѧ�Ų�ѯѧ���ɼ����俼�Գɼ�
    printf("6.Statistic  analysis\n");//��ѧ�����ɼ���Ϊ5�࣬ͳ��ÿ����ռ�İٷֱ�
    printf("7.List  record\n");//���ÿ��ѧ����ѧ�ţ����Գɼ������ֺܷ�ƽ����
    printf("0.Exit\n");//�˳�
    printf("Please  enter  your  choice\n");//���������ѡ��
    int  n;//����n����Ϊ�༶����
    char choice;//�����û���ѡ������
    int  score[N];//�ɼ�
    long num[N];//ѧ��
    int x,i;//x��ʾĳ��ѧ����ѧ��
    int analysis[5];
    scanf("%c",&choice);
    getchar();
    switch (choice)
    {
        case '1':
        {
        printf("How many students?\n");
        scanf("%d",&n);
        ReadStudentScoreAndId(num,score,n);
        }
        break;
        case '2':
        {
           printf("sum=%d\n",Average( score,n)*n);
           printf("The AverageScore is %d",Average( score,n)) ;
        }
        break;
        case '3':
        {
            DataSort(num,score, n);
        }
        break;
        case '4':
        {
           DataSortPlus(num,score,n);
        }
        break;
        case '5':
        {   
            printf("Please input the student ID\n");
           scanf("%d",&x);
           i=Search(num,x,n);
           printf("the student is  %dth,score is %d",i,score[i]);
        }





    }
    
  
    system("pause");
    return 0;
}






void ReadStudentScoreAndId(long num[],int score[],int n)
{
   
    int i;
    printf("Input student's ID  and score:\n");
    for(i=0;i<n;i++)
    {
      scanf("%ld%d",&num[i],&score[i]);
    }
    printf("�������\n");
}
int Average(int score[],int n)
{
    int i,sum =0;
    if(n<=0)
    {
        return -1;//�˴��������Ƿ����룬���n<=0,  ����ֵΪ-1
    }
else
    {
    for(i =0;i<n;i++)
    {
        sum=sum+score[i];
    }
    return sum/n;
     }
}
void  DataSort(long num[],int score[],int n)
{   
    int i,j,temp1,temp2;
    for (i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)

     {
       if(score[j]>score[i])
        {
          { temp1=score[j];
           score[j]=score[i];
            score[i]=temp1;
          }
          {
            temp2=num[j];
            num[j]=num[i];
            num[i]=temp2;
          }
        }
     }
   
    }
}
void  DataSortPlus(long num[],int score[],int n)
{
     int i,j,temp1,temp2;
    for (i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
     {
       if(num[j]<num[i])
        {
           {temp1=num[j];
           num[j]=num[i];
            num[i]=temp1;
           }
           {
             temp2=score[j];
             score[j]=score[i];
            score[i]=temp2;
           }
        }
     }
   
    }
}

int  Search(long num[],long x,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(num[i]==x)
        return  i;
    }
    return -1;
}

void Analysis(int score[],int analysis[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if ()
    }
}



