/*学生成绩管理系统P226*/
#include<stdio.h>
#include<stdlib.h>
#define N  30
void ReadStudentScoreAndId(long num[],int score[],int n);//用来读取学号和成绩
int Average(int score[],int n);//用来计算成绩平均值
void  DataSort(long num[],int score[],int n);
void  DataSortPlus(long num[],int score[],int n);
int  Search(long num[],long x,int n);



int main(void)
{
    printf("1.Input record\n");//录入每个学生的学号和考试成绩
    printf("2.Caculate total  and average  score  of   course\n");//计算成绩的总分和平均分
    printf("3.Sort  in descending  order  by  score\n");//按成绩由高到低排出名次表
    printf("4.Sort  in   descending   order by number\n");//按学号由小到大排出成绩表
    printf("5.Search  by   number\n");//按学号查询学生成绩及其考试成绩
    printf("6.Statistic  analysis\n");//将学生按成绩分为5类，统计每类人占的百分比
    printf("7.List  record\n");//输出每个学生的学号，考试成绩课堂总分和平均分
    printf("0.Exit\n");//退出
    printf("Please  enter  your  choice\n");//请做出你的选择
    int  n;//这里n变量为班级人数
    char choice;//储存用户的选择数据
    int  score[N];//成绩
    long num[N];//学号
    int x,i;//x表示某个学生的学号
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
    printf("输入结束\n");
}
int Average(int score[],int n)
{
    int i,sum =0;
    if(n<=0)
    {
        return -1;//此处用来检查非法输入，如果n<=0,  返回值为-1
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



